//// unordered_map::find
//#include "_CRT_SECURE_NO_WARNINGS.h"
//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <cstdlib> 
//
//int main() {
//	std::unordered_map<std::string, double> mymap = {
//	   {"mom",5.4},
//	   {"dad",6.1},
//	   {"bro",5.9} };
//
//	std::string input;
//	std::string aa = "yii";
//	std::cout << "who? ";
//	getline(std::cin, input);
//	std::cout << "aa type===: " << typeid(aa).name() << std::endl;
//	std::cout << "input type===: " << typeid(input).name() << std::endl;
//	std::cout << "input  ============" << input << std::endl;
//	// ²éÕÒ
//	std::unordered_map<std::string, double>::const_iterator got = mymap.find(input);
//
//	//std::cout << getenv("USER") << std::endl;
//	if (got == mymap.end())
//		std::cout << "not found";
//	else
//		std::cout << got->first << " is " << got->second;
//	const char* pp = "jeuw";
//	std::cout << pp << std::endl;
//	std::cout << typeid(pp).name() << std::endl;
//	std::cout << std::endl;
//	return 0;
//}
