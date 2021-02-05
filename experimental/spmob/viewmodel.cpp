#include "viewmodel.h"
#include <zmq.hpp>
#include <iostream>

ViewModel::ViewModel(QObject *parent) : QObject(parent)
{

}

void ViewModel::send()
{
    zmq::context_t ctx(1);
    zmq::socket_t sock(ctx, ZMQ_REP);
    sock.bind("tcp://*:8283");
    zmq::message_t msg(12);

    sock.recv(&msg, 12);
    std::cout << msg.data() << std::endl;
    zmq::message_t msgs("Hello World", 12);
    sock.send(msgs);
}
