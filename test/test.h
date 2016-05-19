#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QMainWindow>
#include "ui_test.h"

class test : public QMainWindow
{
	Q_OBJECT

public:
	test(QWidget *parent = 0);
	~test();

private slots:
void on_pushButtonClose_clicked();
//left panel buttons
void on_pushButtonEdit_clicked();
void on_pushButtonAddThings_clicked();
void on_pushButtonSave_clicked();
//right panel buttons
void on_pushButtonAddClinic_clicked();
void on_pushButtonAddNails_clicked();
void on_pushButtonAddBeauty_clicked();
void on_pushButtonDelete_clicked();

private:
	Ui::Form ui;
};

#endif // TEST_H
