#include<iostream>
using namespace std;
 
int main()
{
   cout << "Hello World!1111222" << endl;
   // cout << getenv("aa") << endl;
   // cout << getenv("qqq") << endl;
   // string s(getenv("HOME"));
   cout << "====================" << endl;
   // cout << s << endl;
    printf("PATH : %s\n", getenv("PATH"));
   printf("HOME : %s\n", getenv("HOME"));
   printf("ROOT : %s\n", getenv("ROOT"));
   std::string interface;
   interface = std::string(getenv("HOME"));
   cout << interface << endl;

   std::string aa;
   const char* nhost = getenv("qqq");
   // if (nhost) aa = std::string(nhost);
   if(nhost==nullptr) {cout << "=====aaa" << endl;}
   if (nhost) aa = std::string(nhost);
   cout << aa << endl;
   cout << aa.size() << endl;
   cin.get();
   return 0;
}
