// 题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，又多吃了一个。
// 第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
// 以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，只剩下一个桃子了。求第一天共摘了多少。

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 1;
    for(int i = 0; i < 9; i++){
        num = (num+1)*2;
    }
    printf("第一天总共摘了%d个桃子\n", num);
    printf("验算如下：\n");
    int eatNum;
    for(int i = 0; i <= 9; i++){
        if(i==9){
            printf("第%d天开始有%d个桃子\n", (i+1), num);
            break;
        }
        printf("第%d天开始有%d个桃子，", (i+1), num);
        eatNum = num / 2 + 1;
        num = num - eatNum;
        printf("吃了%d个，还剩%d个\n", eatNum, num);
    }
    system("pause");
    return 0;

}
