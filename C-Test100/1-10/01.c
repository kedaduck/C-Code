// 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            for(int k = 1; k < 5; k++){
                if( i!=j && j!=k && i!=k){
                    printf("%d  ", i*100+j*10+k);
                }  
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}