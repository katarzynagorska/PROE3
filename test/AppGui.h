#pragma once
#ifndef AppGui_H
#define AppGui_H

//#include <list>
#include <QtWidgets/QMainWindow>
#include "ui_test.h"
#include "AppModel.h"

class AppGui : public QMainWindow
{
	Q_OBJECT

public:
	AppGui(QWidget *parent = 0);
	~AppGui();

	//Methods handling line edits stuff
	QString getLine(QLineEdit *qle);
	void tryLineEdit(QLineEdit *qle);
	void lineIsNum(QString qstr);

private slots:
	void on_pushButtonClose_clicked();
	//left panel buttons
	void on_pushButtonEdit_clicked();
	void on_pushButtonBrowse_clicked();
	void on_pushButtonAddPatient_clicked();
	void on_pushButtonAddEquipement_clicked();
	void on_pushButtonAddPrice_clicked();
	void on_pushButtonAddService_clicked();
	void on_pushButtonAddWorker_clicked();
	void on_pushButtonSave_clicked();
	//right panel buttons
	void on_pushButtonAddClinic_clicked();
	void on_pushButtonAddNails_clicked();
	void on_pushButtonAddBeauty_clicked();
	void on_pushButtonDelete_clicked();
	//listwidget
	void on_listWidget_currentItemChanged();

private:
	Ui::Form ui;
	AppModel model;

	bool editingC, editingBS, editingNAS;
};

#endif // AppGui_H
