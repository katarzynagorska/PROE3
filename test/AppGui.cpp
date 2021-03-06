#include "AppGui.h"
#include <qmessagebox.h>
#include "utilities.h"
#include "MyList.h"
#include <iostream>

using namespace std;

AppGui::AppGui(QWidget *parent)	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	//resetting all flags
	editingBS = false;
	editingNAS = false;
	editingC = false;

}

AppGui::~AppGui()
{
//	this->destroy;
}


void AppGui::on_pushButtonClose_clicked(){
	this->close();
}


//left panel buttons - essential to saving new object
//Ustawienie nazwy obiektu
void AppGui::on_pushButtonEdit_clicked(){
	
	QString newName = getLine(ui.lineEditName);
		if (editingC){
			model.getClinic().setName(newName.toStdString());
		}
		//else if (editingBS){
		//	model.getBeauty().setName(newName.toStdString());
		//}
		//else if (editingNAS){
		//	model.getNails().setName(newName.toStdString());
		//}
		else{
			QMessageBox::critical(this, "Error", "Nie edytujesz �adnego obiektu");
		}
}

void AppGui::on_pushButtonSave_clicked(){

	ui.textBrowserInfo->setText("Wci�ni�to Save");
	
	if (editingC)
	{
		try{
			if (model.clinicIsReady())
			{
				Clinic newC = model.getClinic();
				model.addObject(newC);
				ui.textBrowserMyDebug->setText("Rozmiar listy " + QString::fromStdString(to_string(model.list.size())));
				ui.textBrowserInfo->setText(QString::fromStdString(model.list.end()->infoToStr()));

				new QListWidgetItem(QString::fromStdString(newC.getName()), ui.listWidget);
			}
		}
		catch (QString *strErrMsg)
		{
			QMessageBox::critical(this, "Error", *strErrMsg);
			return;
		}

	}
	else if (editingNAS)
	{
		//nailartsaloon stuff
	}
	else if (editingBS){
		//beautystudio stuff
	}
	else
	{
		QMessageBox::critical(this, "Error", "Nie edytujesz zadnego obiektu");
		return;
	}
}
//right panel buttons//Right panel buttons
void AppGui::on_pushButtonAddClinic_clicked(){
	editingC = true;
//	ui.textBrowserInfo->setText(QString::fromStdString(randomC()));
	Clinic c;

}
void AppGui::on_pushButtonAddNails_clicked(){
	editingNAS = true;
	ui.textBrowserInfo->setText(QString::fromStdString(randomNAS()));
}
void AppGui::on_pushButtonAddBeauty_clicked(){
	editingBS = true;
	ui.textBrowserInfo->setText(QString::fromStdString(randomBS()));
	
}
void AppGui::on_pushButtonDelete_clicked(){
	ui.textBrowserInfo->setText("Wci�ni�to Usu�");
	
}
//Right panel - list widget representing myLIst of HCU*
void AppGui::on_listWidget_currentItemChanged(){

	ui.textBrowserInfo->setText("Wybrano " + QString::fromStdString(to_string(ui.listWidget->currentRow())) + " pozycje na liscie\n"
		+ "Lista ma " + QString::fromStdString(to_string(model.list.size())) + " pozycji\n");

	QMessageBox::critical(this, "Error", "Y U NO WORK?");

	ui.textBrowserMyDebug->setText(QString::fromStdString(model.list[0]->infoToStr()));
	QMessageBox::critical(this, "Error", "DUPA2");
	//for (int i = 0; i < model.list.size(); i++){
	//	ui.textBrowserMyDebug->setText(QString::fromStdString(model.list.at(ui.listWidget->currentRow())->infoToStr()));
	//	QMessageBox::critical(this, "Error", QString::fromStdString(model.list.at(ui.listWidget->currentRow())->infoToStr()));
	//}


	//cout << model.list.at(ui.listWidget->currentRow())->infoToStr() << endl;
//	ui.textBrowserMyDebug->setText( "Dane obiektu z pozycji: " + QString::fromStdString(to_string(ui.listWidget->currentRow()))
//		+ "\n" + QString::fromStdString(model.list.at(ui.listWidget->currentRow())->infoToStr()));

//	ui.textBrowserMyDebug->setText(QString::fromStdString(model.list.at(ui.listWidget->currentRow())->infoToStr()));
//	model.getHCU() = model.getObject(ui.listWidget->currentRow());
//	ui.textBrowserMyDebug->setText("Rozmiar listy: "QString::fromStdString(model.getObject(ui.listWidget->currentRow()).infoToStr()));
}
//Left panel adding stuff to HCU's

//TODO okno �adowania pliku;
//za�adowanie obrazu
void AppGui::on_pushButtonBrowse_clicked(){

}
void AppGui::on_pushButtonAddPatient_clicked(){

	ui.textBrowserInfo->setText(getLine((ui.lineEditPatient)));
}
void AppGui::on_pushButtonAddEquipement_clicked(){ 
	ui.textBrowserInfo->setText(getLine((ui.lineEditEquipment)));
}
void AppGui::on_pushButtonAddPrice_clicked(){ 
	ui.textBrowserInfo->setText(getLine((ui.lineEditPrice)));
}
void AppGui::on_pushButtonAddService_clicked(){ 
	ui.textBrowserInfo->setText(getLine((ui.lineEditService)));
}
void AppGui::on_pushButtonAddWorker_clicked(){ 
	ui.textBrowserInfo->setText(getLine((ui.lineEditWorker)));
}

//Error MssgBoxes and stuff
void AppGui::tryLineEdit(QLineEdit *qle){
	if (qle->text().isEmpty())
		throw new QString("Wprowadz poprawna wartosc " + qle->objectName());
}

void AppGui::lineIsNum(QString qstr){
	bool ok;
	int num = qstr.toInt(&ok, 10);
	if (!ok)
		throw new QString("Wprowadz poprawna wartosc liczbowa!");
}

QString AppGui::getLine(QLineEdit *qle){
	try{
		if (qle == ui.lineEditPrice)
			lineIsNum(qle->text());
		else
			tryLineEdit(qle);
	}
	catch (QString *strErrMsg)
	{
		QMessageBox::critical(this, "Error", *strErrMsg);
		return "";
	}

	QString txt = qle->text();
	qle->setText("");
	return txt;
}