//#include <string>
//#include <sstream>
//#include <iostream> 
//#include<fstream>
//#include "logging.h"
//using namespace std;
//
//
//#define NAME(n) num ## n            //宏定义，使用 ## 运算符
//#define CONS(a,b) int(a##e##b)
//
//#define fun(a, b)                  \
//    do{                             \
//        int c = a + b ;             \
//        cout << "res======="<<c << endl;         \
//    }while(0);
//
//#define fun22(x)  #x
//
//int main(void)
//{
//	cout << "===============" << endl;
//	int a = 11;
//	std::ostringstream ostr1;   
//	ostr1 << "oooppp uuii" << "2012"  <<" sss" << endl; // 格式化，此处endl也将格式化进ostr1中  
//	cout << ostr1.str();
//
//	const char* aawww = "qwwe";
//	const char* res = NULL;
//	//res =CHECK_NOTNULL(www);
//	//cout << res << endl;
//	fun(3, 7);
//	//CHECK_NOTNULL(www);
//	const char* qq=fun22(ddff);
//	cout << qq << endl;
//
//	const char* c_s = "66778";
//	int res01 = atoi(c_s);
//	cout << res01 << endl;
//
//	const char* c_s01 = "worker";
//	string role(c_s01);
//	cout << role << endl;
//
//	bool is_worker_, is_server_, is_scheduler_;
//	is_worker_ = role == "worker";
//	is_server_ = role == "server";
//	is_scheduler_ = role == "scheduler";
//	cout << is_worker_ << endl;
//	cout << is_server_ << endl;
//	cout << is_scheduler_ << endl;
//
//	enum Role { SERVER, WORKER, SCHEDULER };
//	Role aa;
//	aa = SCHEDULER;
//	cout << aa << endl;
//	enum colors { red, yellow, blue, white, black };
//	colors color;
//
//	std::string pi = "pi is" + std::to_string(3.1415926);
//	std::string perfect = std::to_string(1 + 2 + 4 + 7 + 14) + "is a perfect number";
//	std::cout << pi << std::endl;
//	std::cout << perfect << std::endl;
//	int num0 = 10;
//	std::cout << NAME(0) << std::endl;
//	std::cout << CONS(2, 3) << std::endl;
//
//
//
//	return 0;
//}