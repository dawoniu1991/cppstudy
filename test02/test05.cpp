
#include <iostream>
#include <zmq.h>
#include "meta.pb.h"
using namespace std;



int main()
{
      // GOOGLE_PROTOBUF_VERIFY_VERSION;  
      PBMeta pb;
// pb.ParseFromArray();

int head = pb.head();
cout << "head=="<<head << endl;
 cout << "--1111-----====----" << endl;
   return 0;
}
