#include "Global.h"
#include "ImplMWMMain.h"

#include <QtWidgets/QApplication>

void setup_loggers(const std::string &logger_config_file)
{
    // Load configuration file
    DOMConfigurator::configure(logger_config_file);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImplMWMMain w;

    setup_loggers(LOGGER_CONFIG_FILE);

    LOG4CXX_DEBUG(ImplMWMLogger, "Showing Main window.");
    w.show();

    return a.exec();
}
