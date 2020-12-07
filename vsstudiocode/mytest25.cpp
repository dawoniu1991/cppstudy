//#include<iostream>
//#include<string.h>
////宏定义一个MaxName
//#define MaxName 10
////宏定义   定义了一个判断条件用于识别图片上传之后的返回码 并输出日志条件
//#define AssertReturnValue(name,result)do{\
//    if(result==0)\
//        cout<<"图片"<<name<<"上传成功";\
//}while(0)
//using namespace std;
//class Picture
//{
//public:
//    Picture(const char* path, const char* file) {
//        strcpy(this->path, path);
//        strcpy(this->file, file);
//    }
//    ~Picture() {
//
//    }
//
//private:
//    char file[MaxName];
//    char path[MaxName];
//};
//int uploadPicture(const Picture picture)
//{
//    cout << "成功";
//    return 0;
//}
//int main(int argc, char* argv[])
//{
//    Picture picture("100", "100");
//    int result = uploadPicture(picture);
//    //调用结果判断宏定义
//    AssertReturnValue("100", result);
//    return 0;
//}