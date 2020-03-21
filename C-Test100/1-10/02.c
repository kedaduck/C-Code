// 题目：
// 企业发放的奖金根据利润提成。
// 利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时高于40万元的部分，可提成3%；
// 60万到100万之间时，高于60万元的部分，可提成1.5%；
// 高于100万元时，超过100万元的部分按1%提成。
// 从键盘输入当月利润I，求应发放奖金总数？

#include <stdio.h>
#include <stdlib.h>

void getSalary(float benifit){
    float salary  = 0;
    if(benifit <= 10.0){
        salary = benifit * 0.1;
    }else if( 10.0 < benifit <= 20.0){
        salary = 10.0 * 0.1 + (benifit - 10.0) * 0.075;
    }else if ( 20.0 < benifit <= 40.0){
        salary = 10.0 * 0.1 + 10.0 * 0.075 + (benifit - 20.0) * 0.05;
    }else if ( 40.0 < benifit <= 60.0){
        salary = 10.0 * 0.1 + 10.0 * 0.075 + 10 * 0.05 + (benifit - 40.0) * 0.03;
    }else if ( 60.0 < benifit <= 100.0){
        salary = 10.0 * 0.1 + 10.0 * 0.075 + 10 * 0.05 + 10.0 * 0.03 + (benifit - 60.0) * 0.015;
    }else{
        salary = 10.0 * 0.1 + 10.0 * 0.075 + 10 * 0.05 + 10.0 * 0.03 + 10.0 * 0.015 + (benifit-100.0) * 0.01;
    }
    printf("奖金是%.3f万元\n", salary);
}

int main(){

    float benifit;
    while (1){
        printf("请输入当月利润(单位：万)：\n");
        scanf("%f", &benifit);
        if(benifit <= 0){
            printf("请输入大于0的值\n");
            continue;
        }
        getSalary(benifit);
    }
    system("pause");
    return 0;
}