//#include <string>
//#include <sstream>
//#include <iostream> 
//#include<fstream>
//using namespace std;
//
//class A {
//public:
//	int m;
//	A(int i) :m(i) { cout << "====" << endl; }
//};
//
//int main(void)
//{
//
//		
//	cout << "===============" << endl;
//	//string s = "abc";
//	//const char* c_s = s.c_str();
//
//	//const char* c_s = "abc";
//	//string s(c_s);
//
//	string s = "aaabc";
//	char* c;
//	const int len = s.length();
//	c = new char[len + 1];
//	strcpy_s(c, len + 1, s.c_str());
//	cout << s << endl;
//	cout << c << endl;
//	//cout << getenv("PATH") << endl;
//
//	std::ostringstream ostr1; // 构造方式1  
//	ostr1 << "oooppp uuii" << 2012 << endl; // 格式化，此处endl也将格式化进ostr1中  
//	cout << ostr1.str();
//	return 0;
//}