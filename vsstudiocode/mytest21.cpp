//#include <iostream>
//using namespace std;
//
//
//class TestOper
//{
//public:
//	TestOper();
//	~TestOper();
//	void OutLLog()&;
//	void OutRLog()&&;
//private:
//
//};
//
//TestOper::TestOper()
//{
//}
//
//TestOper::~TestOper()
//{
//}
//void TestOper::OutLLog()&
//{
//	std::cout << "只能给左值对象调用" << std::endl;
//}
//void TestOper::OutRLog()&&
//{
//	std::cout << "只能给右值对象调用" << std::endl;
//}
//
//int main(void)
//{
//
//	TestOper myTest;
//	myTest.OutLLog();
//	TestOper().OutRLog();
//	return 0;
//}