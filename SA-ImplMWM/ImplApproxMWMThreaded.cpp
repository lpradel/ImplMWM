#include "Global.h"
#include "ImplApproxMWMThreaded.h"

ImplApproxMWMThreaded::ImplApproxMWMThreaded()
    : ImplApproxMWMLogger(Logger::getLogger("ImplApproxMWMLogger")), epsilon(0.0), maximalMatchingType(KARP_SIPSER), calcMatchingWeight(false), inputType(GRAPH_FILE)
{
}

ImplApproxMWMThreaded::~ImplApproxMWMThreaded()
{
}

void ImplApproxMWMThreaded::configureGraphFileInput(const QString filePath, const GraphFileType graphFileType)
{
    this->inputType = GRAPH_FILE;
}

void ImplApproxMWMThreaded::configureOptions(const double epsilon, const ImplMBMType maximalMatchingType, const bool calcMatchingWeight)
{
    this->epsilon = epsilon;
    this->maximalMatchingType = maximalMatchingType;
    this->calcMatchingWeight = calcMatchingWeight;
}

void ImplApproxMWMThreaded::configureRandomGraphInput(const int numNodes, const int numEdges, const int maxWeight)
{
    this->inputType = RANDOM_GRAPH;
}

void ImplApproxMWMThreaded::process()
{
    // calculate matching...
    QThread::sleep(5);

    switch (inputType)
    {
    case GRAPH_FILE:
        emit signalMatchingCalculationFinished("SUCCESS");
        break;

    case RANDOM_GRAPH:
        emit signalMatchingCalculationFinished("SUCCESS");
        break;

    default:
        LOG4CXX_ERROR(ImplApproxMWMLogger, "Undefined ImplMWMInputType, unable to proceed.")
        emit signalMatchingCalculationFinished("FAILURE");
        return;
    }
}
