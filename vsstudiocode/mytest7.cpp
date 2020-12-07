//#include <iostream>
//#include <functional>
//using namespace std;
//
//void printA(int a)
//{
//    cout << a << endl;
//}
//
//int main() {
//    std::function<void(int)> func;
//    func = printA;
//    func(21);
//
//    std::function<void()> func_1 = []() {cout << "hello world" << endl; };
//    func_1();
//
//    struct Foo {
//        Foo(int num) : num_(num) {}
//        void print_add(int i) const { cout << num_ + i << '\n'; }
//        int num_;
//    };
//
//    // 保存成员函数
//    std::function<void(const Foo&, int)> f_add_display = &Foo::print_add;
//    Foo foo(2);
//    f_add_display(foo, 31);
//    return 0;
//}