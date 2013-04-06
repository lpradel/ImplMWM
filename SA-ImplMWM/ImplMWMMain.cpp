#include "Global.h"
#include "ImplApproxMWMThreaded.h"
#include "ImplMWMMain.h"

ImplMWMMain::ImplMWMMain(QWidget *parent)
    : QMainWindow(parent), implApproxMWMThread(nullptr)
{
    ui.setupUi(this);
}

ImplMWMMain::~ImplMWMMain()
{
    this->implApproxMWMThread = nullptr;
}

void ImplMWMMain::clickedAbout()
{
    LOG4CXX_DEBUG(ImplMWMLogger, "Showing About window.");
    QMessageBox::information(0, "Hello World!", "Hi!");
}

void ImplMWMMain::clickedCancel()
{
    LOG4CXX_DEBUG(ImplMWMLogger, "Requested execution cancel. Killing worker thread.");
    QMessageBox::information(0, "Clicked cancel!", "Hi!");
}

void ImplMWMMain::clickedRun()
{
    ImplMWMInputType currentInputType = this->determineInputType();

    switch (currentInputType)
    {
    case GRAPH_FILE:
        break;

    case RANDOM_GRAPH:
        break;

    default:
        LOG4CXX_ERROR(ImplMWMLogger, "Unknown InputType. Cancelling execution.");
        return;
    }

    this->implApproxMWMThread = new QThread;
    ImplApproxMWMThreaded* implApproxMWM = new ImplApproxMWMThreaded();
    implApproxMWM->moveToThread(implApproxMWMThread);
    connect(implApproxMWMThread, SIGNAL(started()), implApproxMWM, SLOT(process()));
    connect(implApproxMWM, SIGNAL(signalMatchingCalculationFinished(QString)), this, SLOT(onMatchingCalculationFinished(QString)));
    connect(implApproxMWM, SIGNAL(signalMatchingCalculationFinished(QString)), implApproxMWMThread, SLOT(quit()));
    connect(implApproxMWM, SIGNAL(signalMatchingCalculationFinished(QString)), implApproxMWM, SLOT(deleteLater()));
    connect(implApproxMWMThread, SIGNAL(finished()), implApproxMWMThread, SLOT(deleteLater()));
    connect(implApproxMWMThread, SIGNAL(finished()), this, SLOT(onImplApproxMWMThreadFinished()));
    implApproxMWMThread->start();

    ui.btnRun->setEnabled(false);
    ui.btnCancel->setEnabled(true);
}

void ImplMWMMain::clickedSelectGraphFile()
{
    QFileDialog graphFileDialog(this, tr("Select Graph File..."), QDir::currentPath(), tr("Any Graph file (*)"));
    graphFileDialog.setFileMode(QFileDialog::ExistingFile);

    if (graphFileDialog.exec())
    {
        QStringList selectedGraphFiles = graphFileDialog.selectedFiles();
        if (!selectedGraphFiles.empty())
        {
            this->selectedGraphFile = selectedGraphFiles.first();
            ui.lineEditGraphFile->setText(selectedGraphFile);

            LOG4CXX_DEBUG(ImplMWMLogger, ("Selected Graph file: " + selectedGraphFile).toStdString());
        }
    }
}

void ImplMWMMain::onMatchingCalculationFinished(QString info)
{
    LOG4CXX_INFO(ImplMWMLogger, ("Worker thread terminated with the following message: " + info).toStdString());

    ui.btnRun->setEnabled(true);
    ui.btnCancel->setEnabled(false);
}

void ImplMWMMain::onImplApproxMWMThreadFinished()
{
    // The threads finish() signal is connected to its deleteLater method.
    // Once deleted we cannot call isFinished() anymore, so we denote
    // this by nullptr instead.
    this->implApproxMWMThread = nullptr;
}

void ImplMWMMain::closeEvent(QCloseEvent *event)
{
    if (this->implApproxMWMThread == nullptr)
    {
        // No thread created or it has terminated and called deleteLater()
        event->accept();
        return;
    }

    // Thread is still running!
    QMessageBox::information(0, "Not finished!!", "Not finished!!");
    event->ignore();
}

ImplMWMInputType ImplMWMMain::determineInputType()
{
    int currentTabIndex = ui.tabWidgetGraphInput->currentIndex();

    ImplMWMInputType currentInputType =  static_cast<ImplMWMInputType>(currentTabIndex);

    return currentInputType;
}
