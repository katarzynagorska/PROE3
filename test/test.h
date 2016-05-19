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
void handleClose();
void handleAddClinic();

private:
	Ui::Form ui;
};

#endif // TEST_H
