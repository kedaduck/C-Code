// 题目：利用条件运算符的嵌套：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
#include <stdio.h>
#include <stdlib.h>

int main(){
    while(1){
        int score;
        printf("请输入成绩：（输入-1结束程序）\n");
        scanf("%d", &score);
        if(score < 0){
            break;
        }
        char grade;
        grade = score >=  90 ? 'A': score <= 60 ? 'C':'B';
        printf("你的成绩是%c\n", grade);
    }
    

    system("pause");
    return 0;
}
