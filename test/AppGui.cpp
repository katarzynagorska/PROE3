#include "AppGui.h"
#include <qmessagebox.h>
#include "utilities.h"
#include "MyList.h"

AppGui::AppGui(QWidget *parent)	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.pushButtonClose->setEnabled(true);
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
//TODO okno ³adowania pliku;
//za³adowanie obrazu
void on_pushButtonBrowse_clicked(){

}

//left panel buttons
//Ustawienie nazwy obiektu
void AppGui::on_pushButtonEdit_clicked(){
	ui.textBrowserInfo->setText("Wciœniêto Edytuj");
}

void AppGui::on_pushButtonSave_clicked(){

	ui.textBrowserInfo->setText("Wciœniêto Save");

}
//right panel buttons
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
	ui.textBrowserInfo->setText("Wciœniêto Usuñ");
	
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

void AppGui::deafultButtonConfig(bool b){


}

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