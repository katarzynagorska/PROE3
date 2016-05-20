#include "test.h"
#include "utilities.h"
#include "MyList.h"

test::test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	ui.pushButtonEdit->setDisabled(true);
	ui.pushButtonAddThings->setDisabled(true);
	ui.pushButtonSave->setDisabled(true);
	ui.lineEditEquipment->setDisabled(true);
	ui.lineEditImage->setDisabled(true);
	ui.lineEditName->setDisabled(true);
	ui.lineEditPatient->setDisabled(true);
	ui.lineEditService->setDisabled(true);
	ui.lineEditWorker->setDisabled(true);
	ui.lineEditPrice->setDisabled(true);

	/////////
	/////////
	myList<int> lista;
	stringstream ss;

	
	for (int i = 0; i < 5; i++)
		lista.push_back(10 * i);
	
	ss << "Rozmiar listy: " << lista.size() <<endl;
	ss << "Lista: "; 
	ss << lista[0] << "t1" <<endl;
	for (int i = 0; i < lista.size(); i++)
	{
		ss << lista[i] << ".";
	}
	ss << "t2" << endl;
	ui.textBrowserInfo->setText(QString::fromStdString(ss.str()));
}

test::~test()
{
//	this->destroy;
}

void test::on_pushButtonClose_clicked(){
	this->close();
}

//left panel buttons
void test::on_pushButtonEdit_clicked(){
	ui.textBrowserInfo->setText("Wciœniêto Edytuj");
}
void test::on_pushButtonAddThings_clicked(){
	ui.textBrowserInfo->setText("Wciœniêto Dodaj rzeczy");
}
void test::on_pushButtonSave_clicked(){
	ui.textBrowserInfo->setText("Wciœniêto Save");
}
//right panel buttons
void test::on_pushButtonAddClinic_clicked(){
	ui.textBrowserInfo->setText(QString::fromStdString(randomC()));
}
void test::on_pushButtonAddNails_clicked(){
	ui.textBrowserInfo->setText(QString::fromStdString(randomNAS()));
}
void test::on_pushButtonAddBeauty_clicked(){
	ui.textBrowserInfo->setText(QString::fromStdString(randomBS()));
}
void test::on_pushButtonDelete_clicked(){
	ui.textBrowserInfo->setText("Wciœniêto Usuñ");
}

