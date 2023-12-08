#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//状态码
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN = 2,
    QUIT = 3,
};

//宏定义
//代码规范4：宏定义不允许使用小写字母，全部大写
#define COUNT_NUM 10
#define RANDGE_NUM 200

int main()
{
    
    // //判断语句
    // int bugget = 5000;

    // int ipone = 8999;
    // int mi14pro = 4399;
    // int huaweip60pro = 6000;

    // if(bugget > ipone)
    // {
    //     printf("get a ipone!\n");
    // }
    // else if(bugget > mi14pro)
    // {
    //     printf("get a mi14pro!\n");
    // }
    // else if(bugget > huaweip60pro)
    // {
    //     printf("get a huaweip60pro!\n");
    // }

    // int bugget = 5000;
    // int minbugget = 5500;
    // int maxbugget = 8000;
    // int ipone18 = 8999;
    // int mi14pro = 4399;
    // int huaweip60pro = 6000;
    
    // //只要有一个条件满足，就成立输出1
    // if(bugget < ipone18 || bugget > mi14pro)
    // {
    //     printf("so happy, get a phone\n");
    // }
    // else
    // {
    //     printf("so sad!\n");
    // }
    // //两边都条件都成立，输出1
    // if((minbugget < bugget) && (bugget < maxbugget))
    // {
    //     printf("success get a computer\n");
    // }
    // else
    // {
    //     printf("error get a computer\n");
    // }


    //代码规范1:一个函数尽量不要超过80行，最多不要超过120行
    // int choice = 0;
    // printf("please a choice\n");
    // scanf("%d",&choice);
    // switch (choice)
    // {
    // case REGISTER:
    //     {
    //         printf("Welcome to register\n");
    //     }
    //     break;
    // case LOGIN:
    //     {
    //         printf("Welcome to login\n");
    //     }
    //     break;
    // case QUIT:
    //     {
    //         printf("Welcome to quit\n");
    //     }
    //     break;
    
    // default:
    //     printf("input choice invalid\n");
    //     break;
    // }
    

    // srand(time(NULL));
    // //循环
    // //100以内的数
    // // int randomNum = rand() % 100 + 1 ;

    // // printf("randomNum : %d\n",randomNum);

    // // randomNum = rand() % 100 + 1 ;
    
    // // printf("randomNum : %d\n",randomNum);

    // //for循环
    // //代码规范2:循环不允许使用 i
    // //代码规范3:不允许使用魔鬼数字
    // //index -> idx
    // int randomNum = 0;
    // for(int idx = 1;  idx <= COUNT_NUM; idx++)
    // {
    //     randomNum = rand() % RANDGE_NUM + 1 ;
    //     printf("randomNum : %d\n",randomNum);
    // }
    
    //代码规范5：变量尽量使用驼峰式命名
    // srand(time(NULL));
    // int circulateTimes = COUNT_NUM >> 1;
    // int randomNum = 0;
    // //一定需要有退出条件
    // while (--circulateTimes)
    // {
    //     randomNum = rand() % RANDGE_NUM + 1;
    //     printf("randomNum : %d\n",randomNum);
    // }
    
    //先执行，再判断，用处，常使用在宏函数

    
    
    
    
    return 0;
}