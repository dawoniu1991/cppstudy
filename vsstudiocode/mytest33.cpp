//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//class CT
//{
//public:
//	int m_i = 566;
//	void myfuncpt(int x, int y)
//	{
//		auto mylambda1 = [this] //无论是用this,还是用&、=都可以读取成员变量值
//		{
//			return m_i; //有this，这个访问才合法,有&、=也可以
//		};
//		cout << mylambda1() << endl;
//	}
//	void mf() {}
//};
//
//int main() {
//	CT ct;
//	ct.myfuncpt(3, 4);
//}