#pragma once
#ifndef IMPLMWMMAIN_H
#define IMPLMWMMAIN_H

#include <QCloseEvent>
#include <QFileDialog>
#include <QMessageBox>
#include <QThread>
#include <QtWidgets/QMainWindow>
#include "ui_ImplMWMMain.h"
#include "GraphFileType.h"
#include "ImplMBMType.h"
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
    void onImplApproxMWMThreadFinished();
    void onMatchingCalculationFinished(QString info);

protected:
    void closeEvent(QCloseEvent* event);

private:
    Ui::ImplMWMMainClass ui;
    QString selectedGraphFile;
    QThread* implApproxMWMThread;

    GraphFileType determineGraphFileFormat();
    ImplMWMInputType determineInputType();
    ImplMBMType determineMaximalMatchingType();
};

#endif // IMPLMWMMAIN_H
