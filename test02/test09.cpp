#include <string>
#include <sstream>
#include <iostream>
 
using namespace std;
 
int main()
{
    stringstream sstream;
    int a=123;
    bool b=true;
    // 将多个字符串放入 sstream 中
    sstream << "first" << " " << "string,"<<"==============";
    sstream << "second string"<<a<<b;
    cout << "strResult is: " << sstream.str() << endl;
 
    // 清空 sstream
    // sstream.str("");
    // sstream << "third string";
    // cout << "After clear, strResult is: " << sstream.str() << endl;
     return 0;
}