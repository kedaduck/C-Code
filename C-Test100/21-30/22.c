// 题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。
// a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a, b, c;
	for (int a = 'x'; a <= 'z'; ++a)
	{
		for (int b = 'x'; b <= 'z'; ++b)
		{
			for (int c = 'x'; c <= 'z'; ++c)
			{
				if (a != 'x' && c != 'x' && c != 'z' && a != b && a != c && b != c)
				{
					printf("a和%c比，b和%c比，c和%c比\n", a, b, c);
				}
			}
		}
	}
    system("pause");
	return 0;
}