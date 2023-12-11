#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32


int main()
{
#if 0
    // //字符数组  1、开辟了连续的空间 2、
    // char array[BUFFER_SIZE];
    // //数组初始化 1
    // memset(array, 0 , sizeof(array));
    
    // int len = sizeof(array);
    //printf("len = %d\n", len);

    // char array[BUFFER_SIZE] = "hello world";

    // int len = sizeof(array);
    // printf("len = %d array = %s\n", len, array);
#endif
#if 0
    //字符串（字符数组）
    char array1[BUFFER_SIZE] = "hello world";
    //strlen : 获取字符串长度 不包括 '\0'
    int len = strlen(array1);
    printf("len = %d\n",len);

    //strcpy :  字符串拷贝
    char name[BUFFER_SIZE];
    memset(name, 0 , sizeof(name));
    strcpy(name, "zhangsan");
    printf("name = %s\n",name);
    //strcat : 字符串链接
    strcat(name, " is a boy");
    printf("name = %s\n",name);

    //strcmp : 字符串比较
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name, name2);
    printf("ret = %d\n",ret);
#endif
    

    /* 字符串(常量) */
    /* 指针 */
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len = %d\n", len);
    printf("size = %d\n", size);

    printf("ptr = %c\t*(ptr + 1) = %c\tptr = %s\n",*ptr , *(ptr + 1), ptr);

    *ptr = 'H';
    printf("ptr = %c\t*(ptr + 1) = %c\tptr = %s\n",*ptr , *(ptr + 1), ptr);
    
    
    
    return 0;
}