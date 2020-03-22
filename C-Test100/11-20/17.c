// 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
	int letterCnt = 0, spaceCnt = 0, numCnt = 0, otherCnt = 0;
	while ((c = getchar()) != '\n'){
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')){
			letterCnt++;
		}
		else if (c == ' '){
			spaceCnt++;
		}
		else if (c >= '0'&&c <= '9'){
			numCnt++;
		}
		else{
			otherCnt++;
		}
	}

	printf("英文字母个数为%d\n", letterCnt);
	printf("空格个数为%d\n", spaceCnt);
	printf("数字个数为%d\n", numCnt);
	printf("其它字符个数为%d\n", otherCnt);
    system("pause");
    return 0;
}