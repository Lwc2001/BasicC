#include <stdio.h>
#include <string.h>



//buffer 缓冲器
#define BUFFER_SIZE 10

/*数组
1、它是一段连续的存储空间
2、它的数据类型都是相同的*/

int main()
{
    //初始化方法1：使用定义即初始化
    int array[BUFFER_SIZE] = { 0 };
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx , array[idx]);
    }
    
    int len = sizeof(array);
    printf("len = %d\n",len);
    
    //数组的地址就是数组首元素的地址
    //地址
    printf("%p\n",array);
    printf ( "%p\n",&array[0]);
    printf("%p\n",&array[1]);
    

    //二进制
    //八进制
    //十进制
    //十六进制

    //清楚脏数据
    // memset(array,0,sizeof(array));
    printf("===================\n");
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx , array[idx]);
    }

    

    return 0;
}