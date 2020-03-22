// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
// 最小公倍数 * 最大公约数 = m * n
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    
    while(1){
        printf("请输入两个整数(输入-1结束)\n");
        scanf("%d %d", &m, &n);
        if(m < 0 || n < 0){
            break;
        }
        int max = m;
        int min = n;
        while( m % n != 0){
            n = m % n;
            m = n;
        }
        printf("最大公约数为%d\n", n);
        printf("最小公倍数为%d\n", (max * min) / n);
    }
    system("pause");
    return 0;
}