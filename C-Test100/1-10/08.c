// 题目：输出9*9乘法表。
#include <stdlib.h>
#include <stdio.h>

int main(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= i; j++){
            printf("%d*%d=%d\t", j, i, i*j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}