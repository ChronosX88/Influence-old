#ifndef NETWORK_HPP
#define NETWORK_HPP

#include "lib/json/json.hpp"
#include <QUdpSocket>
using json = nlohmann::json;

class network
{
    public:
        send(QString str, QHostAddress ip);
    private:
        sendPing(QHostAddress ip);
};

#endif // NETWORK_H