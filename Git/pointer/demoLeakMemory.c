#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 10
 /* 内存泄漏 : 3种场景
            1、野指针
            2、malloc出的堆空间，没有被释放
            3、踩内存(read / write is invalid)*/

int main()
{
    /* Q1：什么情况下会导致内存泄漏 */
    //case 1: 野指针
#if 0
    int a;
    printf("a = %d\n", a);
    
    int array[BUFFER_SIZE];
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\n",array[idx]);
    }
#endif
#if 0
    char *p; // p = 0xf84684645;
    printf("\n");
#endif


    // case 2:
    char * ptr = malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        /* todo ... */
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间，数据是脏数据 */
    memset(ptr , 0 , sizeof(char) * BUFFER_SIZE);
#if 0
    /* 极度危险，该用strncpy */
    strcpy(ptr, "hello");
#else
    /* 使用安全 */
    strncpy(ptr, "hello wordlgergrt", BUFFER_SIZE - 1);

#endif

#if 1
    printf("ptr = %s\n", ptr);
    
    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
#endif
    return 0;
}