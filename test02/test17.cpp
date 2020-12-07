#include <iostream>
#include <atomic>
#define N(x,y) (x+y)
#define Nff(x,y) (std::cout<<"==========================aa"<<std::endl,(x+y+y))
#define area(x,ser) N##ser(x,x)*(x)
int main()
{
    int y = area(5,ff);
   std::cout<<y<<std::endl;


   std::atomic<bool> ready_{true};

   std::cout<<ready_.load()<<std::endl;
   std::cout<<EINTR<<std::endl;
}