//#include <iostream>
//#include <sstream>
//using namespace std;
//int j = 3;//j��ȫ�ֱ���
//
//int val()
//{
//    int i = 1;
//    return i;
//}
//int& ref()
//{
//     //int j=3;//j�����Ǿֲ�������
//    int& i = j;
//    return i; //���ܷ��ؾֲ����������
//}
//
//int main()
//{
//
//    int   vv = val();
//    int   rv = val();//int   &rv = val()����val()���ص���һ��int�͵�������������&rv ��ֵ�ı�����һ��ͬ���͵ı�����
//    int   vr = ref();
//    int& rr = ref();
//    cout << vv << endl;
//    cout << rv << endl;
//    cout << vr << endl;
//    cout << rr << endl;
//
//    enum color_set2 { GREEN, RED, YELLOW, WHITE } color3, color4;
//    color3 = YELLOW;           //��ö�ٳ���ֵ����ö�ٱ���
//    color4 = color3;        //��ͬ���͵�ö�ٱ�����ֵ��color4��ֵΪRED
//    int  i = color3;        //��ö�ٱ����������ͱ�����i��ֵΪ1
//    int  j = GREEN;         //��ö�ٳ����������ͱ�����j��ֵΪ0
//
//    const char* pp = "pod";
//    std::cout << "pp ==shikong" <<*(pp+1)<< std::endl;
//
//    cout << "color3======="<<color3 << endl;
//    //cout << typeid(color3).name() << endl;
//    //cout << "i==" << i << "j====" << j << endl;
//   // if (color3 == 9) cout << "���";
//        //������Ǳ���color3��WHITE�ıȽϽ�������Ϊ1
//   //     cout << (color3 < WHITE);
//
//        std::stringstream ss_stream;
//        ss_stream << "�ַ���һ" << endl;
//        ss_stream << "�ַ�����" << endl;
//        ss_stream << "�ַ�����" << endl;
//        ss_stream << "�ַ�����" << endl;
//        ss_stream << "�ַ�����" << endl;
//
//        char buffer[9];
//        while (ss_stream.getline(buffer, sizeof(buffer)))
//        {
//            printf("msg=%s\n", buffer);
//        }
//        for (volatile int i = 0; i < 2000000; i++);
//        //ss_stream("");// �ͷ��ַ������е���Դ
//    return 0;
//}