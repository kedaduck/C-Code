// 题目：判断101到200之间的素数。
// 判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除， 则表明此数不是素数，反之是素数。

#include <stdlib.h>
#include <stdio.h>

int main(){

    for(int i = 101; i <= 200; i++){
        for(int j = 2; j < i; j++){
            if( i%j == 0){
                printf("%d不是素数\n", i);
                break;
            }
        }
    }


    system("pause");
    return 0;
}