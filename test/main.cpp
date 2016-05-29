#include "AppGui.h"
#include <QtWidgets/QApplication>


using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AppGui w;
	w.setWindowTitle("Katarzyna Gorska - PROE 3");
	w.setFixedSize(860,660);

	w.show();

	return a.exec();

}
