// 题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if (n > 1){
		char tmp = getchar();
		f(n - 1);
		putchar(tmp);
	}
	else{
		char tmp = getchar();
		putchar(tmp);
	}
}

int main(){
    f(5);
    system("pause");
    return 0;
}