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
