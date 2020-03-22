// 题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方。
#include <stdio.h>
#include <stdlib.h>

int cube(int n){
    return n*n*n;
}

int main(){

    for(int i = 100; i < 1000; i++){
        int nums[3];
        int temp = i;
        int count = 1;
        int divide  = 100;
        while( temp != 0){
            nums[count-1] = temp/divide;
            temp = temp%divide;
            divide /= 10;
            count++;
        }
        int sum = 0;
        sum = cube(nums[0]) + cube(nums[1]) + cube(nums[2]);
        if(sum == i){
            printf("%d是水仙花数\n", i);
        }
    }
    system("pause");
    return 0;
}