// 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
#include <stdio.h>
#include <stdlib.h>

int main(){

    float sum = 100;
    float step = 50;
    for(int i = 2; i <= 10; i++){
        sum = sum + 2*step;
        step = step / 2;
    }
    printf("sum = %0.2f\n", sum);
    printf("step = %0.2f\n", step * 2);

    system("pause");
    return 0;
}