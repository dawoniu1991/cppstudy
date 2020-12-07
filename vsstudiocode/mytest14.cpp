////#include <memory>
//#include <iostream>
//
//struct Foo {
//    Foo(int n = 0) noexcept : bar(n) {
//        std::cout << "Foo: constructor, bar = " << bar << '\n';
//    }
//    ~Foo() {
//        std::cout << "Foo: destructor, bar = " << bar << '\n';
//    }
//    int getBar() const noexcept { return bar; }
//private:
//    int bar;
//};
//
//int main()
//{
//    std::shared_ptr<Foo> sptr = std::make_shared<Foo>(1);
//    std::cout << "The first Foo's bar is " << sptr->getBar() << "\n";
//
//    // ���ã������µ� Foo ʵ��
//    // ���˵��ú����پ�ʵ����
//    sptr.reset(new Foo);
//    std::cout << "The second Foo's bar is " << sptr->getBar() << "\n";
//}