//#include <iostream>
//#include <functional>
//using namespace std;
//class A
//{
//public:
//    void fun_3(int k, int m)
//    {
//        cout << k << " " << m << endl;
//    }
//};
//
//void fun(int x, int y, int z)
//{
//    cout << x << "  " << y << "  " << z << endl;
//}
//
//void fun_2(int& a, int& b)
//{
//    a++;
//    b++;
//    cout << a << "  " << b << endl;
//}
//
//int main(int argc, const char* argv[])
//{
//    auto f1 = std::bind(fun, 11, 22, 33); //��ʾ�󶨺��� fun �ĵ�һ��������������ֵΪ�� 1 2 3
//    f1(); //print:1  2  3
//
//    auto f2 = std::bind(fun, placeholders::_1, placeholders::_2, 453);
//    //��ʾ�󶨺��� fun �ĵ���������Ϊ 3����fun �ĵ�һ�����������ֱ��е��� f2 �ĵ�һ����������ָ��
//    f2(10, 20);//print:1  2  3
//
//    auto f3 = std::bind(fun, placeholders::_2, placeholders::_1, 3);
//    //��ʾ�󶨺��� fun �ĵ���������Ϊ 3����fun �ĵ�һ�����������ֱ��е��� f3 �ĵڶ���һ������ָ��
//    //ע�⣺ f2  ��  f3 ������
//    f3(1, 2);//print:2  1  3
//
//
//    int n = 2;
//    int m = 3;
//
//    auto f4 = std::bind(fun_2, n, placeholders::_1);
//    f4(m); //print:3  4
//
//    cout << m << endl;//print:4  ˵����bind���ڲ����Ȱ󶨵Ĳ�����ͨ��std::placeholders���ݵĲ�����ͨ�����ô��ݵ�
//    cout << n << endl;//print:2  ˵����bind����Ԥ�Ȱ󶨵ĺ���������ͨ��ֵ���ݵ�
//
//
//    A a;
//    auto f5 = std::bind(&A::fun_3, a, placeholders::_1, placeholders::_2);
//    f5(100, 200);//print:10 20
//
//    std::function<void(int, int)> fc = std::bind(&A::fun_3, a, std::placeholders::_1, std::placeholders::_2);
//    fc(10, 20);//print:10 20
//
//    return 0;
//}