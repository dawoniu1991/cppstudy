//#include <iostream>
//#include <functional>
//using namespace std;
//struct Add
//{
//	int operator()(int i, int j)
//	{
//		return i + j;
//	}
//};
//
////ģ�庯������
//template <class T>
//struct AddT
//{
//	T operator()(T i, T j)
//	{
//		return i + j;
//	}
//};
//
//
//int main()
//{
//	std::function<int(int, int)> f = Add();
//	cout << f(21, 3) << endl;
//
//	std::function<int(int, int)> ft = AddT<int>();
//	cout << ft(5, 6) << endl;
//
//	getchar();
//	return 0;
//}