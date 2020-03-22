// 题目：一个数如果恰好等于它的真因子之和，这个数就称为"完数"。例如6=1＋2＋3。编程找出1000以内的所有完数。
// Tips:找数n的因子只需要找到n/2(n/2-n的数是n的1-2倍，所以当大于n/2时，不会有因数)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum = 0;
    for(int i = 6; i <= 1000; i++){
        for(int j = 1; j <= (i / 2); j++){
            if( i % j == 0){
                sum = sum + j;
            }
        }
        if(sum == i){
            printf("%d是完数\n", i);
        }
        sum = 0;
    }

    system("pause");
    return 0;
}