#pragma once

#include "network.hpp"
#include <QJsonObject>

class Handler : public QObject
{
    Q_OBJECT

    const QString my_ipv6 = Network::local_ipv6();

    public:
        Handler();
    signals:
        createSessionSuccess();
    private:
        Network *network;
    private slots:
        void handle(QJsonObject jsonReceived);


};