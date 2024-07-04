#include "mainwindow.h"


MainWindow::MainWindow(QWidget* parent):
	QWidget(parent),
	ui_mw_(new Ui_MainWindow)
{
	ui_mw_->setupUi(this);
}


MainWindow::~MainWindow() {}