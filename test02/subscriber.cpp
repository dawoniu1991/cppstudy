



#include "zmq.h"
#include <cassert>
#include <cstring>
#include<iostream>
 using namespace std;
// int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char *argv[])
{
void *context = zmq_ctx_new();
void *subscriber = zmq_socket(context, ZMQ_SUB);
int rc = zmq_connect(subscriber, "tcp://localhost:5556");
assert (rc == 0);
 
const char *filter = "tqqqq ";
rc = zmq_setsockopt(subscriber, ZMQ_SUBSCRIBE, filter, strlen(filter));
 cout << "aaaa=="<<rc << endl;
assert (rc == 0);
 
char buffer[256] = {0};
int size = zmq_recv(subscriber, buffer, 255, 0);
printf("Timestamp=======: %s\n", buffer);
 
zmq_close(subscriber);
zmq_ctx_destroy(context);
 
return 0;
}