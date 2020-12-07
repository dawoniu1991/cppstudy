#include <iostream>
#include <string>
#define Conn(x,y) x##y
// #define ToChar(x) #@x
#define ToString(x) #x
#define CHECK_NOTNULL(x) \
  ((x) == NULL ?  std::cout<<"==========================aa"<<std::endl  ,#x :(x)) 

int main()
{
   int n = Conn(123,45678);
   std::cout<<n<<std::endl;
   char* aabb ="aaassss";
   char* bb ="qqq";
//    const char* str = Conn("aa","bb");
   std::string str = Conn(aa,bb);
//    const char* str = Conn("asdf","adf");
   std::cout<<str<<std::endl;
   char* str11 = ToString(asddddddddddddddddddd);
   std::cout<<str11<<std::endl;

const char* val = NULL;
// val=CHECK_NOTNULL(NULL);
// val=CHECK_NOTNULL(nullptr);
val=CHECK_NOTNULL(str11);
if(val=="123132"){
   std::cout<<"nnnnnnnnnnnnnnnnnnn"<<std::endl; 
}
 std::cout<<"val===="<<val<<std::endl; 
if(val==NULL){
   std::cout<<"aaaaaaaaaa"<<std::endl; 
}else{
   std::cout<<"bbbbbbbb"<<std::endl; 
}
int num_servers_ = atoi(val);
    std::cout<<num_servers_<<std::endl;
}