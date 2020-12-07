

#include "zmq.h"
#include <cassert>
#include <ctime>
#include <thread>
using namespace std;

int main(int argc, char *argv[])
{
	void *context = zmq_ctx_new();
	void *publisher = zmq_socket(context, ZMQ_PUB);
    
	int rc = zmq_bind(publisher, "tcp://*:5556");
	assert(rc == 0);
 
	while (1) {
		// Send timestamp to all subscribers
		char timestamp[31] = { 0 };
		sprintf(timestamp, "tqqqq %d", time(NULL));
        puts(timestamp);
		int size = zmq_send(publisher, timestamp, 30, 0);
 
		// Sleep(5000);
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	}
	zmq_close(publisher);
	zmq_ctx_destroy(context);
	return 0;
}