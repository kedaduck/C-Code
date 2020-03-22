// 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制。

#include <stdio.h>
#include <stdlib.h>

int main(){
    while(1){
        int nums;
        int a;
        printf("请输入加数个数:(输入-1结束程序)\n");
        scanf("%d", &nums);
        if(nums < 0){
            break;
        }
        printf("请输入a的值:\n");
        scanf("%d", &a);
        int sum = 0;
        int grade = 1;
        for(int i = nums; i > 0; i--){
            sum = sum + i * a * grade;
            grade = grade*10;
        }
        printf("sum = %d\n", sum);

    }
    

    system("pause");
    return 0;
}
