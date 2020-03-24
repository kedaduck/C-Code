// 题目：求1+2!+3!+...+20!的和。
#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return n*factorial((n-1));
}

int main(){
    int sum = 0;
    for(int i = 1; i <= 20; i++){
        sum += factorial(i);
    }

    printf("1+2!+3!+...+20! = %d\n", sum);
    system("pause");
    return 0;
}