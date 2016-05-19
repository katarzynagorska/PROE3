#include "test.h"
#include "utilities.h"

test::test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

}

test::~test()
{

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
