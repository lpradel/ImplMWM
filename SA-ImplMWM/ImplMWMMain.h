#pragma once
#ifndef IMPLMWMMAIN_H
#define IMPLMWMMAIN_H

#include <QMessageBox>
#include <QtWidgets/QMainWindow>
#include "ui_ImplMWMMain.h"

class ImplMWMMain : public QMainWindow
{
    Q_OBJECT

public:
    ImplMWMMain(QWidget *parent = 0);
    ~ImplMWMMain();

public slots:
    void clickedAbout();

private:
    Ui::ImplMWMMainClass ui;
};

#endif // IMPLMWMMAIN_H
