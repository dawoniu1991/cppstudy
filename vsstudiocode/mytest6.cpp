//#include <iostream>
//#include <functional>
//using namespace std;
//class Computer
//{
//public:
//	static int Add(int i, int j)
//	{
//		return i + j;
//	}
//
//	template<class T>
//	static T AddT(T i, T j)
//	{
//		return i + j;
//	}
//
//	int AddN(int i, int j)
//	{
//		return i + j;
//	}
//};
//
////�洢�Գ�Ա�����ĵ��� 
//
//int main()
//{
//	//1�� �ྲ̬����
//	std::function<int(int, int)> f = &Computer::Add;
//	cout << f(1, 11) << endl;
//
//	//2�� �ྲ̬ģ�庯��
//	std::function<int(int, int)> ft = &Computer::AddT<int>;
//	cout << ft(1, 21) << endl;
//
//
//
//	//��ͨ������  ��Ҫ���������
//	Computer c;
//
//	//3�� ��ͨ���� ��ʹ��bind,��������ַ &c ����
//	std::function<int(int, int)> fN = std::bind(&Computer::AddN, &c, placeholders::_1, placeholders::_2);
//	cout << fN(1, 31) << endl;
//
//
//	//4����ͨ������ Ҳ������������  ���˾�������� bind �鷳��������
//	std::function <int(const Computer ��, int, int)> fN2 = &Computer::AddN;
//	cout << fN2(c, 1, 41) << endl;
//
//
//
//
//
//	getchar();
//	return 0;
//}