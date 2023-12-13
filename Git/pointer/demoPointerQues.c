#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world";

    /* Q1: 字符串常量？ 什么叫字符串常量？ */
    /* 1、打印字符串的每一个字符 */
    /* 方法1：使用for循环打印*/
#if 0
    int len = strlen(ptr);
    printf("len = %d\n", len);
    //   初始化一个值   终止条件   值自增
    char p = '0'; 
    for(int idx = 0; idx < strlen(ptr); idx++)   //ptr 一直在变，
    {
        p = *ptr;
        printf("p = %c, idx = %d\n", p, idx);
        ptr++;
        printf("%ld ", strlen(ptr));
    }
#elif 0
    int len = strlen(ptr);
    printf("len = %d\n", len);
    char p = '0'; 
    for(int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p = %c, idx = %d\n", p, idx);
        ptr++;
    }

    /* 实现方式2 */
    while(*ptr != '\0')
    {
        printf("%c\t", *ptr);
        ptr++;
    }

#endif

    /* Q3：给字符串赋值 */
    char *ptr2 = NULL;
#if 1
    ptr2 = "zhangsan";
#else
    printf("%s\n", ptr2);
    //非法地址不能赋值、不能访问
    strcpy(ptr,"zhangsan");
    printf("%s\n", ptr2);
#endif
    
    
    
    return 0;
}