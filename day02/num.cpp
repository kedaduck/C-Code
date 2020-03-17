#include <stdio.h>
#include<stdlib.h>

int main(){
    int a ;
    scanf("%d", &a);

    int i, j, k;
    i = a;
    int ret = 0;
    while (i <= a+3){
        j = a;
        while (j <= a+3){
            k = a;
            while (k <= a+3){
                if(i!=j && j!=k && i!=k){
                    ret++;
                    printf("%d", i*100+j*10+k);
                    if(ret == 6){
                        printf("\n");
                        ret = 0;
                    }else {
                        printf(" ");
                    }
                    
                }
                k++;
            }   
            j++;         
        }
        i++;        
    }
    system("pause");
    return 0;
}