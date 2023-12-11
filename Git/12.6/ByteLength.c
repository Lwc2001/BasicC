#include <stdio.h>



int main()
{
    
    int age = 5;
    int len = sizeof(age);
    printf("age = %d  len = %d\n",age,len);

    short smallNum = 6;
    len = sizeof(smallNum);
    printf("smallNum = %d len = %d\n",smallNum,len);

    long bigNum = 8;
    len = sizeof(bigNum);
    printf("bigNum = %ld len = %d\n",bigNum,len);

    float pointNum = 6.6;
    len = sizeof(pointNum);
    printf("pointNum = %f len = %d\n",pointNum,len);

    double dPointNum = 8.8;
    len = sizeof(dPointNum);
    printf("dPointNum = %lf len = %d\n",dPointNum,len);
    
    
    
    
    return 0;
}