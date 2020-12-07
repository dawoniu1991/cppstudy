#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include <algorithm>
using namespace std;
int main() {
	unordered_map<int, bool> mp;
	mp[1] = false;
	mp[2] = false;
	mp[10] = false;
    if(mp.find(10) != mp.end()) {
        cout << "=============" << endl;
    }
	cout << (bool)(mp.find(10) != mp.end()) << endl;
  int a=1;
  for (int i = 0;i<=10 ; ++i) {
    while (true) {
        if (a== 1) break;}
     if (i== 8) { if(i>=7)  break;}
 cout << "=======" <<i<< endl;
  }

    system("pause");
	return 0;
}
