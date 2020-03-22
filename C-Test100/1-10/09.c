// 题目：输出国际象棋棋盘。（8行*8列）
#include <stdio.h>
#include <stdlib.h>

int main(){

    int isBlack = 1;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(isBlack == 1){
                printf("$ ");
            }else{
                printf("@ ");
            }
            isBlack = isBlack * -1;  
        }
        isBlack = isBlack * -1;
        printf("\n");
    }

    system("pause");
    return 0;

}