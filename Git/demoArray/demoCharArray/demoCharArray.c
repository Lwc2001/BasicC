#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    //如何获取有多少个元素：数组的总长度 / 数组每个元素的长度
    char array[BUFFER_SIZE] = { 0 };

    int arrayLen = sizeof(array);
    printf("len = %d\n",arrayLen);

    int elementLen = sizeof(array[0]);
    printf("len = %d\n",elementLen);

    int length = arrayLen / elementLen;
    pritnf("length = %d\n",length);
#endif
#if 0 
    //字符数组
    //什么叫字符
    char pNum = 'a';
    printf("pNum = %c\n",pNum);
    
    //只要是指针的变量，变量定义第一个是需要p开头的
    char *ptr = "hello world";
    printf("ptr = %s\n",ptr);

    char buffer[] = {'h','e','l','l','o','w','o','r','l','d'};

    int buflen = sizeof(buffer);
    printf("buflen = %d, buffer = %s\n",buflen,buffer);
#endif

    //字符数组初始化定义的两种方式
    //字符串有'/0'结束符
    //如果是以双引号（字符串）的方式定义的话，会默认加上'/0'
    char buffer1[] = "helloworld";
    //字符数组没有'/0'结束符
    //如果是以单引号（字符）的方式定义的话，没有'/0'
    char buffer2[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[] = {'h','e','l','l','o','w','o','r','l','d'};

    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);

    printf("&buffer1 = %p\n",buffer1);
    printf("&buffer2 = %p\n",buffer2);
    printf("&buffer3 = %p\n",buffer3);

    printf("buflen1 = %d,\tbuflen2 = %d\n",buflen1,buflen2);
    printf("buffer1 = %s\n",buffer1);
    printf("buffer2 = %s\n",buffer2);
    printf("buffer3 = %s\n",buffer3);



    return 0;
}