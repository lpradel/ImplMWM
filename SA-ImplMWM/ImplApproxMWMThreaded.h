#pragma once
#ifndef IMPLAPPROXMWMTHREADED_H
#define IMPLAPPROXMWMTHREADED_H

#include <QThread>
#include "Global.h"

class ImplApproxMWMThreaded : public QObject
{
    Q_OBJECT

public:
    ImplApproxMWMThreaded();
    ~ImplApproxMWMThreaded();

signals:
    void signalMatchingCalculationFinished(QString info);

public slots:
    void process();

private:
    LoggerPtr ImplApproxMWMLogger;
};

#endif
