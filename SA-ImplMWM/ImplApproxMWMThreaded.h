#pragma once
#ifndef IMPLAPPROXMWMTHREADED_H
#define IMPLAPPROXMWMTHREADED_H

#include <QThread>
#include "Global.h"
#include "GraphFileType.h"
#include "ImplMBMType.h"
#include "ImplMWMInputType.h"

class ImplApproxMWMThreaded : public QObject
{
    Q_OBJECT

public:
    ImplApproxMWMThreaded();
    ~ImplApproxMWMThreaded();
    void configureGraphFileInput(const QString filePath, const GraphFileType graphFileType);
    void configureOptions(double epsilon, const ImplMBMType maximalMatchingType, const bool calcMatchingWeight);
    void configureRandomGraphInput(const int numNodes, const int numEdges, const int maxWeight);

signals:
    void signalMatchingCalculationFinished(QString info);

public slots:
    void process();

private:
    LoggerPtr ImplApproxMWMLogger;

    ImplMWMInputType inputType;

    bool calcMatchingWeight;
    double epsilon;
    ImplMBMType maximalMatchingType;
};

#endif
