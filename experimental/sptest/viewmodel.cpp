#include "viewmodel.h"
#include <iostream>
#include <zmq.hpp>

viewmodel::viewmodel(QObject *parent) : QObject(parent)
{

}
void viewmodel::send()
{

    zmq::context_t ctx(1);
    zmq::message_t msgs("Hello World\n", 12);
    zmq::socket_t sock(ctx, ZMQ_REQ);
    sock.connect("tcp://192.168.10.7:8283");
    sock.send(msgs);

    zmq::message_t msgr(1024);
    sock.recv(&msgr);
    std::cout << msgr.data() << std::endl;
}
