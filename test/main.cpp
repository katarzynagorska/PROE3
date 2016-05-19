#include "test.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test w;
	w.setWindowTitle("Katarzyna Górska - PROE 3");
	w.setFixedSize(860,620);

	w.show();



	return a.exec();
}
