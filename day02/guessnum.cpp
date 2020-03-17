#include <stdio.h>
#include <stdlib.h>

int main(){

    int guessNum = 0;
    int N = 0;
    printf("请输入数字[1-100]:\n");
    scanf("%d", &guessNum);
    printf("请输入最大次数:\n");
    scanf("%d", &N);
    int count = 1;
    int temp;
    for(int i = 0; i < N; i++){
        if(count > N){
            break;
        }
        printf("请输入第%d次猜的数字:", count);
        scanf("%d", &temp);
        if(temp == guessNum){
            break;
        }else if(temp < guessNum){
            printf("你猜的数字小\n");
        }else{
            printf("你猜的数字大\n");
        }
        count++;
    }
    if(count <= 3){
        printf("Good Luck\n");
    }else if (count <= N){
        printf("Good Guess\n");
    }else{
        printf("Bad Guess\n");
    }
    system("pause");
    return 0;
}