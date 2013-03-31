#include "Global.h"
#include "ImplMWMMain.h"

ImplMWMMain::ImplMWMMain(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

ImplMWMMain::~ImplMWMMain()
{

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

    LOG4CXX_DEBUG(ImplMWMLogger, currentInputType);

    switch (currentInputType)
    {
    case GRAPH_FILE:
        break;

    case RANDOM_GRAPH:
        break;

    default:
        LOG4CXX_ERROR(ImplMWMLogger, "Unknown InputType. Cancelling execution.");
        break;
    }
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

ImplMWMInputType ImplMWMMain::determineInputType()
{
    int currentTabIndex = ui.tabWidgetGraphInput->currentIndex();

    ImplMWMInputType currentInputType =  static_cast<ImplMWMInputType>(currentTabIndex);

    return currentInputType;
}
