// 题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
// （斐波那契数列）
#include <stdio.h>
#include <stdlib.h>

//递归实现
int Fibon1(int n){
    if( n == 1 || n == 2){
        return 1;
    }else{
        return Fibon1( n - 1) + Fibon1( n - 2);
    }
}

int Fibon2(int n){
    if( n < 3){
        return 1;
    }
    int num1 = 1;
    int num2 = 1;
    int temp = 0;
    for(int i = 3; i <= n; i++){
        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    return temp;
}

int main(){
    int n  = 40;
    int ret = 0;
    scanf("%d", &n);
    ret = Fibon2(n);
    printf("ret = %d\n", ret);
    system("pause");
    return 0;
}