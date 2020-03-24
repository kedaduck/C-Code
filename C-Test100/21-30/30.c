// 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
#include <stdlib.h>
#include <stdio.h>

int main(){
    int nums[5];
    int num = 0;
    int temp;
    scanf("%d", &num);
    temp = num;
    int count = 0;
    while( num != 0){
        nums[count] = num % 10;
        count++;
        num /= 10;
    }
    if(nums[0] == nums[4] && nums[1] == nums[3]){
        printf("%d是回文数", temp);
    }else{
        printf("%d不是回文数", temp);
    }

    system("pause");
    return 0;
}