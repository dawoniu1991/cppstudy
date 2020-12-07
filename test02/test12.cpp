#include <stdio.h>
#include <sys/time.h>
#include <time.h>
 
int main()
{
    char buffer[50];
    char* s = "runoobcom";

    // 读取字符串并存储在 buffer 中
    int j = snprintf(buffer, 6, "%s\n", s);
 
    // 输出 buffer及字符数
    printf("string:\n%s\ncharacter count = %d\n", buffer, j);
 
    char test[8];
    int ret= snprintf(test,5,"1234567890");
    printf("%d|%s\n",ret,test);


    char buffer_[9];
    time_t time_value = time(NULL);
    struct tm now;
    localtime_r(&time_value, &now);
    snprintf(buffer_, sizeof(buffer_), "%02d:%02d:%02d", now.tm_hour,
             now.tm_min, now.tm_sec);

    return 0;
}