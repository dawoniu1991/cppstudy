#include <iostream>
using namespace std;

int main ()
{
    cout << "Current Line Number __LINE__ : " << __LINE__ << endl;
    cout << "Current File Name __FILE__ : " << __FILE__ << endl;
    cout << "Current Date __DATE__ : " << __DATE__ << endl;
    cout << "Current Time __TIME__ : " << __TIME__ << endl;

    int a=11;
    int b=(a==112?cout << "Current Time __TIME__ :=============== " << __TIME__ << endl,123:456);
    cout << "b==== " << b << endl;


    unsigned seed = static_cast<unsigned>(time(NULL) + 1100);

    return 0;
}
