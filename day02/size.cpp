/*
 * @Author: leoren
 * @Date: 2020-03-17 09:55:29 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2020-03-17 11:59:12
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    a = 6;
    printf("sizeof(double) = %ld\n", sizeof(long double));
    printf("sizeof(a) = %ld\n", sizeof(a));
    void *p;
    int cnt = 0;
    while ( (p=malloc(100*1024*1024))){
        cnt++;
    }
    printf("总共分配了%d00M空间", cnt);
    free(p);
    
    system("pause");
    return 0;
}