#include <QApplication>
#include "mainwindow.h"

#ifdef _WIN32
#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")
#endif


int main(int argc,char* argv[]) {
	QApplication app(argc,argv);
	MainWindow mw;
	mw.show();
	app.exec();
}