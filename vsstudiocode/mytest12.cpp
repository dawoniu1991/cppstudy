//// constructing unordered_maps
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//typedef std::unordered_map<std::string, std::string> stringmap;
//
//stringmap merge(stringmap a, stringmap b) {
//	stringmap temp(a);
//	temp.insert(b.begin(), b.end());
//	return temp;
//}
//std::unordered_map<std::string, std::string>  Environment(const std::unordered_map<std::string, std::string>* envs) {
//	std::unordered_map<std::string, std::string>  kvs;
//	if (envs) kvs = *envs;
//	 //kvs = *envs;
//	std::cout << "================" << std::endl;
//	return kvs;
//}
//
//int main() {
//	stringmap first;                              // empty
//
//	// 一个元素为：{key, value}
//	stringmap second({ {"apple","red"}, {"lemon","yellow"} });       // init list
//	stringmap third({ {"orange","orange"}, {"strawberry","red"} });  // init list
//	stringmap fourth(second);                    // copy
//	stringmap fifth(merge(third, fourth));        // move
//	stringmap sixth(fifth.begin(), fifth.end());  // range
//
//	std::cout << "sixth contains:" << std::endl;
//	for (auto& x : sixth)
//		std::cout << " " << x.first << ":" << x.second<<std::endl;
//	std::cout << std::endl;
//	
//	std::unordered_map<std::string, std::string>  kvs;
//	//kvs=Environment(&sixth);
//	kvs = Environment(nullptr);
//	std::cout << "kvs contains:" << std::endl;
//	printf("as wewe%d",33+12);
//	printf("as wewe%s", "ss09878");
//	//std::cout << nullptr << std::endl;
//	for (auto& x : kvs)
//		std::cout << " " << x.first << ":" << x.second << std::endl;
//	std::cout << std::endl;
//	return 0;
//}
