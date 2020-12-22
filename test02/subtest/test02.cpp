#include <iostream>
using namespace std;

class complex
{
    public:
    complex(double r=0,double i=0):re(r),im(i){
        std::cout<<"=========11111========="<<std::endl;
    }
    double real() const {return re;}
    ~complex(){
        std::cout<<"=========22222========="<<std::endl;
    }
    private:
    double re;
    double im;
};
inline double
real(const complex& x)
{
    return x.real();
}

ostream& 
operator << (ostream& os,const complex& x)
{
    return os<<"("<<real(x)<<','<<")";
}

int main ()
{
   complex c1(2,1);
   cout<<c1;
   complex c2(100,200);
   cout<<c2<<c1<<endl;;
//    std::cout<<"=============="<<c1.real()<<std::endl;
//    const complex c2(300,200);
//    std::cout<<"=============="<<c2.real()<<std::endl;
//    complex c3;
//    complex* p=new complex(4);
//    delete p;
   return(0);
}
