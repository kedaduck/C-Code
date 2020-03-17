#include <stdio.h>

void Str(){
    char str[15];
    for(int i = 0; i < 3; i++){
        str[i] = getchar();
    }
    puts(str);
}

void Str1(){
    char str1[20];
    char str2[5][10];
    gets(str1);
    for(int i = 0; i < 3; i++){
        gets(str2[i]);
    }
    puts(str1);
    for(int i = 0; i < 3; i++){
        puts(str2[i]);
    }
}

int main(){
    Str();
    return 0;
}