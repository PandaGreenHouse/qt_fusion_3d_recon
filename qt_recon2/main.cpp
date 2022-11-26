#include "qt_recon2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qt_recon2 w;
	w.show();
	return a.exec();
}
