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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImplMWMMainClass
{
public:
    QAction *actionFile;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QCheckBox *checkBoxCalcMatchingWeight;
    QComboBox *comboBoxMaxMatchingAlgo;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxEpsilon;
    QPushButton *btnRun;
    QPushButton *btnCancel;
    QTabWidget *tabWidgetGraphInput;
    QWidget *tabFileInput;
    QLabel *label_3;
    QLineEdit *lineEditGraphFile;
    QPushButton *btnSelectGraphFile;
    QLabel *label_4;
    QComboBox *comboBoxGraphFileFormat;
    QWidget *tabRandomInput;
    QPushButton *btnClose;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *ImplMWMMainClass)
    {
        if (ImplMWMMainClass->objectName().isEmpty())
            ImplMWMMainClass->setObjectName(QStringLiteral("ImplMWMMainClass"));
        ImplMWMMainClass->resize(423, 617);
        actionFile = new QAction(ImplMWMMainClass);
        actionFile->setObjectName(QStringLiteral("actionFile"));
        actionExit = new QAction(ImplMWMMainClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(ImplMWMMainClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(ImplMWMMainClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 360, 401, 161));
        checkBoxCalcMatchingWeight = new QCheckBox(groupBox);
        checkBoxCalcMatchingWeight->setObjectName(QStringLiteral("checkBoxCalcMatchingWeight"));
        checkBoxCalcMatchingWeight->setGeometry(QRect(10, 130, 321, 20));
        comboBoxMaxMatchingAlgo = new QComboBox(groupBox);
        comboBoxMaxMatchingAlgo->setObjectName(QStringLiteral("comboBoxMaxMatchingAlgo"));
        comboBoxMaxMatchingAlgo->setGeometry(QRect(160, 20, 161, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 141, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 141, 21));
        doubleSpinBoxEpsilon = new QDoubleSpinBox(groupBox);
        doubleSpinBoxEpsilon->setObjectName(QStringLiteral("doubleSpinBoxEpsilon"));
        doubleSpinBoxEpsilon->setGeometry(QRect(160, 50, 71, 22));
        doubleSpinBoxEpsilon->setDecimals(6);
        doubleSpinBoxEpsilon->setMinimum(1e-06);
        doubleSpinBoxEpsilon->setMaximum(0.5);
        doubleSpinBoxEpsilon->setSingleStep(0.1);
        doubleSpinBoxEpsilon->setValue(0.001);
        btnRun = new QPushButton(centralWidget);
        btnRun->setObjectName(QStringLiteral("btnRun"));
        btnRun->setGeometry(QRect(10, 550, 75, 23));
        btnCancel = new QPushButton(centralWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setEnabled(false);
        btnCancel->setGeometry(QRect(100, 550, 75, 23));
        tabWidgetGraphInput = new QTabWidget(centralWidget);
        tabWidgetGraphInput->setObjectName(QStringLiteral("tabWidgetGraphInput"));
        tabWidgetGraphInput->setGeometry(QRect(10, 10, 401, 341));
        tabFileInput = new QWidget();
        tabFileInput->setObjectName(QStringLiteral("tabFileInput"));
        label_3 = new QLabel(tabFileInput);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 101, 21));
        lineEditGraphFile = new QLineEdit(tabFileInput);
        lineEditGraphFile->setObjectName(QStringLiteral("lineEditGraphFile"));
        lineEditGraphFile->setGeometry(QRect(120, 20, 131, 20));
        btnSelectGraphFile = new QPushButton(tabFileInput);
        btnSelectGraphFile->setObjectName(QStringLiteral("btnSelectGraphFile"));
        btnSelectGraphFile->setGeometry(QRect(260, 20, 41, 23));
        label_4 = new QLabel(tabFileInput);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 50, 101, 21));
        comboBoxGraphFileFormat = new QComboBox(tabFileInput);
        comboBoxGraphFileFormat->setObjectName(QStringLiteral("comboBoxGraphFileFormat"));
        comboBoxGraphFileFormat->setGeometry(QRect(120, 50, 131, 22));
        tabWidgetGraphInput->addTab(tabFileInput, QString());
        tabRandomInput = new QWidget();
        tabRandomInput->setObjectName(QStringLiteral("tabRandomInput"));
        tabWidgetGraphInput->addTab(tabRandomInput, QString());
        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(340, 550, 75, 23));
        ImplMWMMainClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImplMWMMainClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImplMWMMainClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(ImplMWMMainClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 423, 21));
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
        QObject::connect(btnRun, SIGNAL(clicked()), ImplMWMMainClass, SLOT(clickedRun()));
        QObject::connect(btnCancel, SIGNAL(clicked()), ImplMWMMainClass, SLOT(clickedCancel()));
        QObject::connect(btnSelectGraphFile, SIGNAL(clicked()), ImplMWMMainClass, SLOT(clickedSelectGraphFile()));
        QObject::connect(btnClose, SIGNAL(clicked()), ImplMWMMainClass, SLOT(close()));

        tabWidgetGraphInput->setCurrentIndex(0);


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
        groupBox->setTitle(QApplication::translate("ImplMWMMainClass", "Options", 0));
        checkBoxCalcMatchingWeight->setText(QApplication::translate("ImplMWMMainClass", "Calculate Matching Weight (may take a while on big graphs)", 0));
        comboBoxMaxMatchingAlgo->clear();
        comboBoxMaxMatchingAlgo->insertItems(0, QStringList()
         << QApplication::translate("ImplMWMMainClass", "Naive Greedy", 0)
         << QApplication::translate("ImplMWMMainClass", "Bollig-Proeger", 0)
         << QApplication::translate("ImplMWMMainClass", "Hachtel-Somenzi Heuristic", 0)
         << QApplication::translate("ImplMWMMainClass", "Karp-Sipser Heuristic", 0)
        );
        label->setText(QApplication::translate("ImplMWMMainClass", "Maximal Matching Algorithm:", 0));
        label_2->setText(QApplication::translate("ImplMWMMainClass", "Approximation precision eps:", 0));
        btnRun->setText(QApplication::translate("ImplMWMMainClass", "Run", 0));
        btnCancel->setText(QApplication::translate("ImplMWMMainClass", "Cancel", 0));
        label_3->setText(QApplication::translate("ImplMWMMainClass", "Graph File:", 0));
        btnSelectGraphFile->setText(QApplication::translate("ImplMWMMainClass", "...", 0));
        label_4->setText(QApplication::translate("ImplMWMMainClass", "Graph File Format:", 0));
        comboBoxGraphFileFormat->clear();
        comboBoxGraphFileFormat->insertItems(0, QStringList()
         << QApplication::translate("ImplMWMMainClass", "Custom", 0)
         << QApplication::translate("ImplMWMMainClass", "DIMACS", 0)
         << QApplication::translate("ImplMWMMainClass", "LEMON", 0)
        );
        tabWidgetGraphInput->setTabText(tabWidgetGraphInput->indexOf(tabFileInput), QApplication::translate("ImplMWMMainClass", "Graph File Input", 0));
        tabWidgetGraphInput->setTabText(tabWidgetGraphInput->indexOf(tabRandomInput), QApplication::translate("ImplMWMMainClass", "Random Graph Input", 0));
        btnClose->setText(QApplication::translate("ImplMWMMainClass", "Close", 0));
        menuFile->setTitle(QApplication::translate("ImplMWMMainClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("ImplMWMMainClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class ImplMWMMainClass: public Ui_ImplMWMMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPLMWMMAIN_H
