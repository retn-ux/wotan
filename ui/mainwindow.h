#ifndef _WOTAN_UI_MAINWINDOW_H_
#define _WOTAN_UI_MAINWINDOW_H_

#include <QWidget>
#include "ui_mainwindow.h"

class MainWindow :public QWidget
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();
private:
	Ui_MainWindow *ui_mw_;
};

#endif