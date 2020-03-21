// 题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float numA, numB;

    int num = -99;

    while (num < 10000){
        numA = sqrt(num + 100);
        numB = sqrt(num + 268);
        if( numA == (int) numA && numB == (int)numB){
            printf("这个数是 %d\n", num);
        }
        num++;
    }
    system("pause");
    return 0;
}
