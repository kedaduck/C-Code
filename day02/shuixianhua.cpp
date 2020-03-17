#include <stdio.h>
#include <stdlib.h>

int power3(int num){
    return num * num * num;
}


int main(){
    int count = 1;
    for(int i = 100; i < 1000; i++){
        int sum  = 0;
        int t = i;
        
        do{
            int d = t % 10;
            t /= 10;
            sum = sum + power3(d);
        } while (t > 0);
        if(sum == i){
            printf("num %d = %d\n" , count++, sum);
        }
    }
    
    system("pause");
    return 0;
}