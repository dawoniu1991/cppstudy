#include <iostream>
using namespace std;

class complex
{
    public:
    complex(double r=0,double i=0):re(r),im(i){
        std::cout<<"=========11111========="<<std::endl;
    }
    ~complex(){
        std::cout<<"=========22222222========="<<std::endl;
    }
    private:
    double re;
    double im;
};

int main ()
{
   complex c1(2,1);
   complex c2;
   complex* p=new complex(4);
   delete p;
   return(0);
}
