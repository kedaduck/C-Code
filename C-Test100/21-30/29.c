// 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("请输入正整数\n");
    int ccount = 0;
    int num;
    scanf("%d", &num);
    while(num > 0){
        int num1 = num % 10;
        ccount++;
        printf("%d", num1);
        num /= 10;
    }
    printf("\n它是%d位数\n", ccount);
    system("pause");
    return 0;
}