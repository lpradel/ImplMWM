#pragma once
#ifndef IMPLMWMMAIN_H
#define IMPLMWMMAIN_H

#include <QMessageBox>
#include <QtWidgets/QMainWindow>
#include "ui_ImplMWMMain.h"
#include "ImplMWMInputType.h"

class ImplMWMMain : public QMainWindow
{
    Q_OBJECT

public:
    ImplMWMMain(QWidget *parent = 0);
    ~ImplMWMMain();

public slots:
    void clickedAbout();
    void clickedCancel();
    void clickedRun();
    void clickedSelectGraphFile();

private:
    Ui::ImplMWMMainClass ui;
    ImplMWMInputType determineInputType();
};

#endif // IMPLMWMMAIN_H
