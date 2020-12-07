//#include <iostream>
//#include <sstream>
//using namespace std;
//int j = 3;//j是全局变量
//
//int val()
//{
//    int i = 1;
//    return i;
//}
//int& ref()
//{
//     //int j=3;//j不能是局部变量！
//    int& i = j;
//    return i; //不能返回局部对象的引用
//}
//
//int main()
//{
//
//    int   vv = val();
//    int   rv = val();//int   &rv = val()错误！val()返回的是一个int型的数，而给引用&rv 赋值的必须是一个同类型的变量。
//    int   vr = ref();
//    int& rr = ref();
//    cout << vv << endl;
//    cout << rv << endl;
//    cout << vr << endl;
//    cout << rr << endl;
//
//    enum color_set2 { GREEN, RED, YELLOW, WHITE } color3, color4;
//    color3 = YELLOW;           //将枚举常量值赋给枚举变量
//    color4 = color3;        //相同类型的枚举变量赋值，color4的值为RED
//    int  i = color3;        //将枚举变量赋给整型变量，i的值为1
//    int  j = GREEN;         //将枚举常量赋给整型变量，j的值为0
//
//    const char* pp = "pod";
//    std::cout << "pp ==shikong" <<*(pp+1)<< std::endl;
//
//    cout << "color3======="<<color3 << endl;
//    //cout << typeid(color3).name() << endl;
//    //cout << "i==" << i << "j====" << j << endl;
//   // if (color3 == 9) cout << "相等";
//        //输出的是变量color3与WHITE的比较结果，结果为1
//   //     cout << (color3 < WHITE);
//
//        std::stringstream ss_stream;
//        ss_stream << "字符串一" << endl;
//        ss_stream << "字符串二" << endl;
//        ss_stream << "字符串三" << endl;
//        ss_stream << "字符串四" << endl;
//        ss_stream << "字符串五" << endl;
//
//        char buffer[9];
//        while (ss_stream.getline(buffer, sizeof(buffer)))
//        {
//            printf("msg=%s\n", buffer);
//        }
//        for (volatile int i = 0; i < 2000000; i++);
//        //ss_stream("");// 释放字符串流中的资源
//    return 0;
//}