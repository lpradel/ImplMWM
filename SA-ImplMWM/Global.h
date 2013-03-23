#pragma once
#ifndef __GLOBAL_H
#define __GLOBAL_H

#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>

// ------------------------------------------------------------------------
// GLOBALLY USED NAMESPACES
// ------------------------------------------------------------------------
using namespace log4cxx;
using namespace log4cxx::xml;
using namespace log4cxx::helpers;

// ------------------------------------------------------------------------
// GLOBAL DEFINES
// ------------------------------------------------------------------------
#define LOGGER_CONFIG_FILE "log4cxx-config.xml"

// ------------------------------------------------------------------------
// GLOBAL STATIC VARIABLES / HANDLES
// ------------------------------------------------------------------------
static LoggerPtr ImplMWMLogger(Logger::getLogger("ImplMWMLogger"));

#endif