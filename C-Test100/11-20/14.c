// 题目：将一个正整数分解质因数。例如：输入90，打印出90=2*3*3*5。

// 分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
// (1)n能被k整除，则应打印出k的值，并用n除以k的商，作为新的正整数n。重复执行。
// (2)如果n不能被k整除，则用k+1作为k的值，重复执行第一步。
#include <stdio.h>
#include <stdlib.h>

int main(){

    while( 1 ){
        int num;
        printf("请输入一个大于3的整数：(输入-1结束程序)\n");
        scanf("%d", &num);
        if( num < 0){
            break;
        }
        int count  = 1;
        int i = 2;
        while ( num != 1) {
            if( num % i == 0){
                printf("第%d个因数是%d\n", count, i);
                count++;
                num = num / i;
            }else{
                i++;
            }
        }
    }
    system("pause");
    return 0;
}