#include <stdexcept>
#include <limits>
#include <iostream>
#include <zmq.h>
using namespace std;
int main()
{

  void *context_ = nullptr;
  /**
   * \brief node_id to the socket for sending data to this node
   */
//   std::unordered_map<int, void*> senders_;
//   std::mutex mu_;
  void *receiver_ = nullptr;
  string hostname="192.168.158.143";
   int local =0;
    //   int num=std::numeric_limits<int>::max();
    cout << std::numeric_limits<int>::max() << endl;
    receiver_ = zmq_socket(context_, ZMQ_ROUTER);
     if(receiver_ == NULL) {cout << "port===" << endl;}
    std::string addr = local ? "ipc:///tmp/" : "tcp://" + hostname + ":";
    cout << addr << endl;

     int port = 33125;
     int max_retry=40;
    unsigned seed = static_cast<unsigned>(time(NULL) + port);
    cout << seed << endl;
    for (int i = 0; i < max_retry + 1; ++i) {
      auto address = addr + std::to_string(port);
       cout << address << endl;
      if (zmq_bind(receiver_, address.c_str()) == 0) break;
      if (i == max_retry) {
        port = -1;
      } else {
        port = 10000 + rand_r(&seed) % 40000;
      }
    }
 cout << port << endl;
   return 0;
}