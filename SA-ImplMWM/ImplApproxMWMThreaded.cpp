#include "Global.h"
#include "ImplApproxMWMThreaded.h"

ImplApproxMWMThreaded::ImplApproxMWMThreaded()
    : ImplApproxMWMLogger(Logger::getLogger("ImplApproxMWMLogger"))
{
}

ImplApproxMWMThreaded::~ImplApproxMWMThreaded()
{
}

void ImplApproxMWMThreaded::process()
{
    // calculate matching...
    QThread::sleep(5);

    // signal end of calculation
    emit signalMatchingCalculationFinished("SUCCESS");
}
