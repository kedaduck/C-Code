#include <stdlib.h>
#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d*%d=%d", j, i, i*j);
            if(j != i){
                printf("\t");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}