#include <unistd.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#include <netinet/in.h>
#include <string>
#include<iostream>
using namespace std;
 
void GetAvailableInterfaceAndIP(
    std::string* interface, std::string* ip) 
{
      struct ifaddrs * ifAddrStruct = nullptr;
  struct ifaddrs * ifa = nullptr;

  interface->clear();
  ip->clear();
  getifaddrs(&ifAddrStruct);
  for (ifa = ifAddrStruct; ifa != nullptr; ifa = ifa->ifa_next) {
    if (nullptr == ifa->ifa_addr) continue;

    if (AF_INET == ifa->ifa_addr->sa_family &&
        0 == (ifa->ifa_flags & IFF_LOOPBACK)) {
      char address_buffer[INET_ADDRSTRLEN];
      void* sin_addr_ptr = &(reinterpret_cast<struct sockaddr_in*>(ifa->ifa_addr))->sin_addr;
      inet_ntop(AF_INET, sin_addr_ptr, address_buffer, INET_ADDRSTRLEN);

      *ip = address_buffer;
      *interface = ifa->ifa_name;

      break;
    }
  }
  if (nullptr != ifAddrStruct) freeifaddrs(ifAddrStruct);
  return;
}

int GetAvailablePort() {
  struct sockaddr_in addr;
  addr.sin_port = htons(0);  // have system pick up a random port available for me
  addr.sin_family = AF_INET;  // IPV4
  addr.sin_addr.s_addr = htonl(INADDR_ANY);  // set our addr to any interface

  int sock = socket(AF_INET, SOCK_STREAM, 0);
  if (0 != bind(sock, (struct sockaddr*)&addr, sizeof(struct sockaddr_in))) {
    perror("bind():");
    return 0;
  }
#ifdef _MSC_VER
  int addr_len = sizeof(struct sockaddr_in);
#else
  socklen_t addr_len = sizeof(struct sockaddr_in);
#endif

  if (0 != getsockname(sock, (struct sockaddr*)&addr, &addr_len)) {
    perror("getsockname():");
    return 0;
  }

  int ret_port = ntohs(addr.sin_port);
#ifdef  _MSC_VER
  closesocket(sock);
#else
  close(sock);
#endif
  return ret_port;
}

// set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 ")

int main()
{
   cout << "Hello World!1111222" << endl;
   // cout << getenv("aa") << endl;
   // cout << getenv("qqq") << endl;
   std::string interface;
   std::string ip;
   GetAvailableInterfaceAndIP(&interface, &ip);
   cout << interface << endl;
   cout << ip << endl;

   int port = GetAvailablePort();
   cout << port << endl;


     const char* pstr = getenv("PORT");
     if(pstr ==nullptr) {cout << "====11" << endl;}
      if (pstr) port = atoi(pstr);
      cout << port << endl;

    //   int num=std::numeric_limits<int>::max();
    // cout << std::numeric_limits<int>::max() << endl;
   return 0;
}