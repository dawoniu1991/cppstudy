//#include <iostream>
//using namespace std;
//
//class A{
//public:
//	int m;
//	A(int i) :m(i) { cout << "====" << endl; }
//};
//
//int main(void)
//{
//
//	string i="112233";
//	cout << &i << endl;
//	string j = std::move(i);
//
//	cout << &i << endl;
//	cout << &j << endl;
//	cout << "==============="<< endl;
//
//	cout << i << endl;
//	cout << j << endl;
//
//	for (int k = 0; k < 3; k++)
//	{
//		A a(k);
//		cout << k << endl;
//		cout << &a << endl;
//	}
//	return 0;
//}