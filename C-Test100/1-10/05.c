// 题目：输入三个整数x,y,z，把这三个数由小到大输出。

#include <stdio.h>
#include <stdlib.h>

int main(){

    int length;
    while (1) {
        printf("请输入整数个数:（按-1退出）\n");
        scanf("%d", &length);
        if(length == -1){
            break;
        }
        int nums[length];
        printf("请输入%d个不同的整数：\n", length);
        for(int i = 0; i < length; i++){
            scanf("%d", &nums[i]);
        }
        for(int i = 0; i < (length - 1); i++){
            for(int j = i; j < length; j++){
                if(nums[j] < nums[i]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        for(int i = 0; i < length; i++){
            printf("%d\t", nums[i]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}