#include <string>  
#include <iostream>  
#include <sstream>  
using namespace std;  
  
int main()  
{  
    std::ostringstream ostr1;
    const char *aa="qqqww";
/*---------------------------------------------------------------------------- 
*** 方法str()将缓冲区的内容复制到一个string对象中，并返回 
----------------------------------------------------------------------------*/  
    ostr1 << "ostr1 " << 222<<aa;
     cout << ostr1.str(); 
     return 0;
}