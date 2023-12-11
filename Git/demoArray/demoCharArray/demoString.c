#include <stdio.h>

//常量
const int g_num = 10;

int main()
{
    
    char buffer1[] = "helloworld";

    buffer1[0] = 'H';

    printf("buffer1 = %s buffer[0] = %c\n",buffer1,buffer1[0]);
    
    //为什么字符不能修改？ 因为字符串是常量，他也是存放在全局区的
    char * ptr = "helloworld";
    
    printf("ptr[0] = %c\n",*(ptr + 0),*(ptr + 1));


    ptr[0] = 'H';
    printf("ptr[0] = %c\n",ptr[0]);

    
    return 0;
}