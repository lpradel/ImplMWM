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
    LOG4CXX_DEBUG(ImplMWMLogger, "Requested execution. Initializing..");
    QMessageBox::information(0, "Clicked run!", "Hi!");

    ImplMWMInputType currentInputType = this->determineInputType();
    LOG4CXX_DEBUG(ImplMWMLogger, currentInputType);
}

void ImplMWMMain::clickedSelectGraphFile()
{
    LOG4CXX_DEBUG(ImplMWMLogger, "Showing Graph file selection dialog.");
    QMessageBox::information(0, "Clicked select graph file!", "Hi!");
}

ImplMWMInputType ImplMWMMain::determineInputType()
{
    QList<QTabBar *> tabList = findChildren<QTabBar *>();
    if(!tabList.isEmpty())
    {
        QTabBar *mainTabBar = tabList.at(0);
        int currentTabIndex = mainTabBar->currentIndex();

        ImplMWMInputType currentInputType =  static_cast<ImplMWMInputType>(currentTabIndex);
        return currentInputType;
    }

    LOG4CXX_ERROR(ImplMWMLogger, "No QTabBar in main window. Unable to determine current input type.")
    return GRAPH_FILE;
}
