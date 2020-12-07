//#include<iostream>
//#include<vector>
//#include <unordered_map>
//using namespace std;
//
//class AA{
//public:
//	static AA* Get() {
//		static AA e; return &e;
//	}
//private:
//	AA(){ std::cout << "========1111=" << std::endl; }
//};
//
//class Environment {
//public:
//	explicit Environment(const std::unordered_map<std::string, std::string>* envs) {
//		std::cout << "12345600000000" << std::endl;
//		if (envs) kvs = *envs;
//	}
//	
//	std::unordered_map<std::string, std::string> kvs;
//	void testfun() {
//		std::cout << "kaishi" << std::endl;
//		std::cout << aaa << std::endl;
//		std::cout << "jieshu" << std::endl;
//	}
//
//	int aaa = 112;
//};
//
//
//
//int main() {
//	AA* aa=AA::Get();
//	std::unordered_map<std::string, std::string> testkvs;
//	std::cout << "qqqq====" << testkvs.size() << std::endl;
//	//if (nullptr) testkvs = *nullptr;
//
//	Environment* bb= new Environment(nullptr);
//	std::cout << "www===" <<  bb->kvs.size()  << std::endl;
//
//	std::cout << bb->aaa << std::endl;
//	bb->testfun();
//	/*if (bb->kvs == nullptr) {
//		std::cout << "qqqq" << std::endl;
//	}*/
//
//	cout << std::numeric_limits<int>::max() << endl;
//	cout << std::numeric_limits<double>::max() << endl;
//
//	const char* nhost = nullptr;
//	std::string ip;
//	cout << ip << endl;
//	cout << ip.size()<< endl;
//	if (nhost) ip = std::string(nhost);
//
//	cout << ip << endl;
//	cout << ip.size() << endl;
//	cout << "=========end" << endl;
//}