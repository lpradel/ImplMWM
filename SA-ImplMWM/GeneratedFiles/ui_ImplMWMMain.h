/********************************************************************************
** Form generated from reading UI file 'ImplMWMMain.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPLMWMMAIN_H
#define UI_IMPLMWMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImplMWMMainClass
{
public:
    QAction *actionFile;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *ImplMWMMainClass)
    {
        if (ImplMWMMainClass->objectName().isEmpty())
            ImplMWMMainClass->setObjectName(QStringLiteral("ImplMWMMainClass"));
        ImplMWMMainClass->resize(600, 400);
        actionFile = new QAction(ImplMWMMainClass);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        actionExit = new QAction(ImplMWMMainClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(ImplMWMMainClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(ImplMWMMainClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImplMWMMainClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImplMWMMainClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImplMWMMainClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(ImplMWMMainClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuBar->setNativeMenuBar(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        ImplMWMMainClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(ImplMWMMainClass);
        QObject::connect(actionExit, SIGNAL(triggered()), ImplMWMMainClass, SLOT(close()));
        QObject::connect(actionAbout, SIGNAL(triggered()), ImplMWMMainClass, SLOT(clickedAbout()));

        QMetaObject::connectSlotsByName(ImplMWMMainClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImplMWMMainClass)
    {
        ImplMWMMainClass->setWindowTitle(QApplication::translate("ImplMWMMainClass", "ImplMWM", 0));
#ifndef QT_NO_TOOLTIP
        ImplMWMMainClass->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        actionFile->setText(QApplication::translate("ImplMWMMainClass", "File", 0));
        actionExit->setText(QApplication::translate("ImplMWMMainClass", "Exit", 0));
        actionAbout->setText(QApplication::translate("ImplMWMMainClass", "About", 0));
        menuFile->setTitle(QApplication::translate("ImplMWMMainClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("ImplMWMMainClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class ImplMWMMainClass: public Ui_ImplMWMMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPLMWMMAIN_H
