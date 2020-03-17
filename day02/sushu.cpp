#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int cnt = 0;
    int sum = 0;
    int count  = 0;
    for(int i = m; i <= n; i++){
        int isPrime = 1;
        for (int j = 2; j < (i-1); j++){
            if( i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if( isPrime){
            printf("素数 %d = %d\n", ++count, i);
            cnt++;
            sum+=i;
        }
    }
    printf("共有 %d个素数, 和为%d", count, sum);

    system("pause");
    return 0;
}