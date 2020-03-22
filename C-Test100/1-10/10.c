// 题目：打印楼梯，同时在楼梯上方打印两个笑脸。
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,j;
	printf("\1\1\n");		/*输出两个笑脸 数字1 */
	/*详细解释：printf("\1"); 的作用是打印出ASCII码为1的字符。
	查询ASCII码表中，十进制的1对应的ASCII意思是soh，即start of head，标题开头的意思。
	该符号为通信专用字符，如果只是用作显示，系统会使用一个特定的图形来显示，这就是我们看到的笑脸。*/
	
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%c%c",200,200);		/*输出一个中文字符*/ 
		}
		printf("\n");
	}
    system("pause");
	return 0;
}