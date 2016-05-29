/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayoutEdit;
    QLineEdit *lineEditPatient;
    QLabel *labelChangeName;
    QLineEdit *lineEditName;
    QLineEdit *lineEditEquipment;
    QLabel *labelAddImage;
    QLabel *labelAddService;
    QLineEdit *lineEditService;
    QLineEdit *lineEditImage;
    QLineEdit *lineEditWorker;
    QLabel *labelAddPatient;
    QLabel *labelSetPrice;
    QLabel *labelAddWorker;
    QLabel *labelAddEquipment;
    QLineEdit *lineEditPrice;
    QPushButton *pushButtonAddEquipement;
    QPushButton *pushButtonAddWorker;
    QPushButton *pushButtonAddPatient;
    QPushButton *pushButtonAddService;
    QPushButton *pushButtonAddPrice;
    QPushButton *pushButtonEdit;
    QPushButton *pushButton;
    QPushButton *pushButtonSave;
    QTextBrowser *textBrowserInfo;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *pushButtonAddClinic;
    QPushButton *pushButtonAddNails;
    QPushButton *pushButtonAddBeauty;
    QPushButton *pushButtonDelete;
    QGraphicsView *graphicsView;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->setWindowModality(Qt::WindowModal);
        Form->resize(861, 655);
        gridLayoutWidget_2 = new QWidget(Form);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 380, 351, 265));
        gridLayoutEdit = new QGridLayout(gridLayoutWidget_2);
        gridLayoutEdit->setObjectName(QStringLiteral("gridLayoutEdit"));
        gridLayoutEdit->setContentsMargins(0, 0, 0, 0);
        lineEditPatient = new QLineEdit(gridLayoutWidget_2);
        lineEditPatient->setObjectName(QStringLiteral("lineEditPatient"));

        gridLayoutEdit->addWidget(lineEditPatient, 5, 1, 1, 1);

        labelChangeName = new QLabel(gridLayoutWidget_2);
        labelChangeName->setObjectName(QStringLiteral("labelChangeName"));

        gridLayoutEdit->addWidget(labelChangeName, 1, 0, 1, 1);

        lineEditName = new QLineEdit(gridLayoutWidget_2);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        gridLayoutEdit->addWidget(lineEditName, 1, 1, 1, 1);

        lineEditEquipment = new QLineEdit(gridLayoutWidget_2);
        lineEditEquipment->setObjectName(QStringLiteral("lineEditEquipment"));

        gridLayoutEdit->addWidget(lineEditEquipment, 6, 1, 1, 1);

        labelAddImage = new QLabel(gridLayoutWidget_2);
        labelAddImage->setObjectName(QStringLiteral("labelAddImage"));

        gridLayoutEdit->addWidget(labelAddImage, 2, 0, 1, 1);

        labelAddService = new QLabel(gridLayoutWidget_2);
        labelAddService->setObjectName(QStringLiteral("labelAddService"));

        gridLayoutEdit->addWidget(labelAddService, 8, 0, 1, 1);

        lineEditService = new QLineEdit(gridLayoutWidget_2);
        lineEditService->setObjectName(QStringLiteral("lineEditService"));

        gridLayoutEdit->addWidget(lineEditService, 8, 1, 1, 1);

        lineEditImage = new QLineEdit(gridLayoutWidget_2);
        lineEditImage->setObjectName(QStringLiteral("lineEditImage"));

        gridLayoutEdit->addWidget(lineEditImage, 2, 1, 1, 1);

        lineEditWorker = new QLineEdit(gridLayoutWidget_2);
        lineEditWorker->setObjectName(QStringLiteral("lineEditWorker"));

        gridLayoutEdit->addWidget(lineEditWorker, 7, 1, 1, 1);

        labelAddPatient = new QLabel(gridLayoutWidget_2);
        labelAddPatient->setObjectName(QStringLiteral("labelAddPatient"));

        gridLayoutEdit->addWidget(labelAddPatient, 5, 0, 1, 1);

        labelSetPrice = new QLabel(gridLayoutWidget_2);
        labelSetPrice->setObjectName(QStringLiteral("labelSetPrice"));

        gridLayoutEdit->addWidget(labelSetPrice, 9, 0, 1, 1);

        labelAddWorker = new QLabel(gridLayoutWidget_2);
        labelAddWorker->setObjectName(QStringLiteral("labelAddWorker"));

        gridLayoutEdit->addWidget(labelAddWorker, 7, 0, 1, 1);

        labelAddEquipment = new QLabel(gridLayoutWidget_2);
        labelAddEquipment->setObjectName(QStringLiteral("labelAddEquipment"));

        gridLayoutEdit->addWidget(labelAddEquipment, 6, 0, 1, 1);

        lineEditPrice = new QLineEdit(gridLayoutWidget_2);
        lineEditPrice->setObjectName(QStringLiteral("lineEditPrice"));

        gridLayoutEdit->addWidget(lineEditPrice, 9, 1, 1, 1);

        pushButtonAddEquipement = new QPushButton(gridLayoutWidget_2);
        pushButtonAddEquipement->setObjectName(QStringLiteral("pushButtonAddEquipement"));

        gridLayoutEdit->addWidget(pushButtonAddEquipement, 6, 2, 1, 1);

        pushButtonAddWorker = new QPushButton(gridLayoutWidget_2);
        pushButtonAddWorker->setObjectName(QStringLiteral("pushButtonAddWorker"));

        gridLayoutEdit->addWidget(pushButtonAddWorker, 7, 2, 1, 1);

        pushButtonAddPatient = new QPushButton(gridLayoutWidget_2);
        pushButtonAddPatient->setObjectName(QStringLiteral("pushButtonAddPatient"));

        gridLayoutEdit->addWidget(pushButtonAddPatient, 5, 2, 1, 1);

        pushButtonAddService = new QPushButton(gridLayoutWidget_2);
        pushButtonAddService->setObjectName(QStringLiteral("pushButtonAddService"));

        gridLayoutEdit->addWidget(pushButtonAddService, 8, 2, 1, 1);

        pushButtonAddPrice = new QPushButton(gridLayoutWidget_2);
        pushButtonAddPrice->setObjectName(QStringLiteral("pushButtonAddPrice"));

        gridLayoutEdit->addWidget(pushButtonAddPrice, 9, 2, 1, 1);

        pushButtonEdit = new QPushButton(gridLayoutWidget_2);
        pushButtonEdit->setObjectName(QStringLiteral("pushButtonEdit"));

        gridLayoutEdit->addWidget(pushButtonEdit, 1, 2, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayoutEdit->addWidget(pushButton, 2, 2, 1, 1);

        pushButtonSave = new QPushButton(gridLayoutWidget_2);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        gridLayoutEdit->addWidget(pushButtonSave, 10, 0, 1, 3);

        textBrowserInfo = new QTextBrowser(Form);
        textBrowserInfo->setObjectName(QStringLiteral("textBrowserInfo"));
        textBrowserInfo->setGeometry(QRect(10, 220, 351, 151));
        listWidget = new QListWidget(Form);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(370, 10, 481, 501));
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(370, 520, 481, 41));
        horizontalLayoutButtons = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutButtons->setObjectName(QStringLiteral("horizontalLayoutButtons"));
        horizontalLayoutButtons->setContentsMargins(0, 0, 0, 0);
        pushButtonAddClinic = new QPushButton(horizontalLayoutWidget);
        pushButtonAddClinic->setObjectName(QStringLiteral("pushButtonAddClinic"));

        horizontalLayoutButtons->addWidget(pushButtonAddClinic);

        pushButtonAddNails = new QPushButton(horizontalLayoutWidget);
        pushButtonAddNails->setObjectName(QStringLiteral("pushButtonAddNails"));

        horizontalLayoutButtons->addWidget(pushButtonAddNails);

        pushButtonAddBeauty = new QPushButton(horizontalLayoutWidget);
        pushButtonAddBeauty->setObjectName(QStringLiteral("pushButtonAddBeauty"));

        horizontalLayoutButtons->addWidget(pushButtonAddBeauty);

        pushButtonDelete = new QPushButton(horizontalLayoutWidget);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));

        horizontalLayoutButtons->addWidget(pushButtonDelete);

        graphicsView = new QGraphicsView(Form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 351, 201));
        pushButtonClose = new QPushButton(Form);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(710, 570, 141, 41));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        labelChangeName->setText(QApplication::translate("Form", "Zmie\305\204 nazw\304\231", 0));
        labelAddImage->setText(QApplication::translate("Form", "Dodaj obraz:", 0));
        labelAddService->setText(QApplication::translate("Form", "Dodaj us\305\202ug\304\231", 0));
        labelAddPatient->setText(QApplication::translate("Form", "Dodaj pacjenta:", 0));
        labelSetPrice->setText(QApplication::translate("Form", "Ustaw cen\304\231", 0));
        labelAddWorker->setText(QApplication::translate("Form", "Dodaj pracownika", 0));
        labelAddEquipment->setText(QApplication::translate("Form", "Dodaj wyposa\305\274enie:", 0));
        pushButtonAddEquipement->setText(QApplication::translate("Form", "Dodaj", 0));
        pushButtonAddWorker->setText(QApplication::translate("Form", "Dodaj", 0));
        pushButtonAddPatient->setText(QApplication::translate("Form", "Dodaj", 0));
        pushButtonAddService->setText(QApplication::translate("Form", "Dodaj", 0));
        pushButtonAddPrice->setText(QApplication::translate("Form", "Ustaw", 0));
        pushButtonEdit->setText(QApplication::translate("Form", "Edytuj", 0));
        pushButton->setText(QApplication::translate("Form", "Przegl\304\205daj", 0));
        pushButtonSave->setText(QApplication::translate("Form", "Zapisz", 0));
        textBrowserInfo->setHtml(QApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButtonAddClinic->setText(QApplication::translate("Form", "Dodaj Przychodni\304\231", 0));
        pushButtonAddNails->setText(QApplication::translate("Form", "Dodaj Studio Paznokci", 0));
        pushButtonAddBeauty->setText(QApplication::translate("Form", "Dodaj Salon Pi\304\231kno\305\233ci", 0));
        pushButtonDelete->setText(QApplication::translate("Form", "Usu\305\204", 0));
        pushButtonClose->setText(QApplication::translate("Form", "Zako\305\204cz", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
