// server.cpp
#include "zmq.h"
#include <cassert>
#pragma comment(lib, "libzmq.lib")
 
int _tmain(int argc, char * argv[])
{
	void *context = zmq_ctx_new();
	void *responder = zmq_socket(context, ZMQ_REP);
	int rc = zmq_bind(responder, "tcp://*:5555");
	assert(rc == 0);
 
	while (1) {
		char buffer[11] = { 0 };
		zmq_recv(responder, buffer, 10, 0);
		printf("Received: %s\n", buffer);
 
		zmq_send(responder, "World", 5, 0);
	}
 
	return 0;
}