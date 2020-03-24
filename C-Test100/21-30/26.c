// 题目：利用递归方法求5!。
#include <stdlib.h>
#include <stdio.h>
int factorial(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return n*factorial((n-1));
}

int main(){
    printf("5! = %d\n", factorial(5));
    system("pause");
    return 0;
}