#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_glwindow.h"

class GLWindow : public QMainWindow
{
	Q_OBJECT

public:
	GLWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::GLWindowClass ui;
};
