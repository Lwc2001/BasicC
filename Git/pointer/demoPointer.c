#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32

/* 指针 */
int main()
{
#if 0
    // 1.指针的定义
    // 基础数据类型
    // 建议（Tips)：定义变量（任意类型）记得初始化 
    int a = 0;
    long b = 0;
    
    // 指针的定义
    // NULL非法地址空间
    int *p = NULL;
#endif

#if 0
    /* 指针的使用：指针内部存放的是某变量的地址 */
    /* 一级 & 二级指针 */
    int a = 5;

    int *p = &a;

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    /* 非常重要 */
    printf("*(&a) = %d\n",*(&a));

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&p = %p\n", &p);
#endif

#if 0

    /* 错误的定义方式 */
    int *ptr = &p;
    printf("ptr = %p\n", ptr);

#endif

#if 0
    /* *p就是解引用（读写数据） */


    int **ptr = &p;
    printf("ptr = %p\n",&p);
    printf("**ptr = %d\n", **ptr);


 /*     pptr = &ptr
        *pptr = &p
        **pptr = &a
        ***pptr = a      */
    int ***pptr = &ptr;
    printf("pptr = %p\n",&pptr);
    printf("*pptr = %p\n",*pptr);
    printf("**pptr = %p\n",**pptr);
    printf("***pptr = %d\n",***pptr);

    
#endif


#if 0
    /* 
        指针的特性 1: 指针占用的内存大小是8个字节（64位操作系统）
        如果是32位操作系统指针占用系统的内存大小是4个字节 
    */
    int a = 10;
    int len = sizeof(a);
    printf("len = %d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len = %d\n", len);
    
    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len = %d\n", len);

    int *ptrInt = &a;
    printf("*ptrInt = %d\n", *ptrInt);
    printf("*(&a) = %d\n", *(&a));
    len = sizeof(ptrInt);
    printf("len = %d\n", len);

#endif

#if 0
    /* 指针特性2 ： 指针和字符串 */
    /* 字符串是区别于字符数组的 */
    char *ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len = %d\n", len);
    
    /* 怎么获取字符串长度 */
    printf("%ld\n",strlen(ptr1));

    /* Q2: 字符数组的赋值*/
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan");
    // name = "zhangsan";
    printf("name = %s\n", name);

    /* Q3：给字符串赋值 */
    char *ptr2 = NULL;
    // ptr2 = "zhangsan";
    // printf("%s\n", ptr2);
    strcpy(ptr2, "zhangsan");
    printf("%s\n", ptr2);
#endif
    /* Q3：给字符串赋值 */
    char *ptr2 = NULL;
    // ptr2 = "zhangsan";
    // printf("%s\n", ptr2);
    strcpy(ptr2, "zhangsan");
    printf("%s\n", ptr2);


    /* 堆空间 */
    /* void * : 是一个指针，整个指针被称为万能指针 */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);

    strcpy(ptr, "zhangsan");
    printf("%s\n", ptr);
    return 0;
}