#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
   
    // int age = 5;
    // int len = sizeof(age);
    
    // printf("sizeof = %d age = %d\n", len, age);

    // long bigValue = 0;
    // len = sizeof(bigValue);
    // printf("sizeof = %d bigValue = %ld\n", len, bigValue);

    // short smallValue = 0;
    // len = sizeof(smallValue);
    // printf("sizeof = %d smallValue = %d\n", len, smallValue);
    // // //浮点型
    // // float weight = 50.5;
    
    // double weight = 50.5;
    // len = sizeof(weight);
    // printf("len = %d, weight = %f\n", len, weight);
    
    // char sex = -1;
    // int len = sizeof(sex);
    // printf("len: %d,sex = %c,sec = %d\n", len, sex, sex);

    // char default_value = 137;
    // len = sizeof(default_value);
    // printf("len: %d,sex = %c,sec = %d\n", len, default_value, default_value);


    //无符号和有符号的区别
    unsigned char m_valur = -1;
     int len = sizeof(m_valur);
    printf("len: %d,sex = %c,sex = %d\n", len, m_valur, m_valur);

    // int val = 10;
    // printf("val:%d\n",val);
    // val++;
    // printf("val:%d\n",val);
    // val--;
    // printf("val:%d\n",val);

    // ++val;
    // printf("val:%d\n",val);
    // --val;
    // printf("val:%d\n",val);
    
    // val = val + 100;
    // printf("val:%d\n",val);

    // val += 100;
    // printf("val:%d\n",val);

    // int m_value = 10;
    // int discuss = m_value / 3;
    // int remainder = m_value % 3;
    // printf("discuss:%d\n",discuss);
    // printf("remainder:%d\n",remainder);

    //运算符 ：双目 & 三目
    int a = 7 + 8;

    //三目
    int num1 = 10;
    int num2 = 30;

    int num3 = (num1 > num2) ? 100: 666;

    printf("num3:%d\n",num3);
    
    
    // //随机数
    // int randomVal = rand();
    // printf("randomVal:%d\n",randomVal);

    // //中奖率
    // int lotteryRate = randomVal % 4;
    // printf("lotteryRate:%d\n",lotteryRate);


    //位运算
    //<<左移
    //>>右移
    // int a = 5 << 1;
    // printf("a:%d\n",a);
    //且 |
    //或 &
    //非 ！

    // int val = 51;
    // int orVal = val | 2;
    // int andVal = val & 2;
    // printf("orVal:%d\n",orVal);
    // printf("andVal:%d\n",andVal);
    // //取反，非零为零，零为一
    // int notVal = !val;

    // // 且或非
    // int condition1 = 1;
    // int condition2 = 6;
    // //或  两边只要有一边成立输出1
    // if((condition1 = 1) || (condition2 = 5))
    // {
    //     printf("hello world\n");
    // }
    // else
    // {
    //     printf("not hello world\n");
    // }
    // //且  两边条件必须都满足，才能输出1，否则输出0
    // if((condition1 = 1) && (condition2 = 5))
    // {
    //     printf("hello world\n");
    // }
    // else
    // {
    //     printf("not hello world\n");
    // }


     return 0;
}