// 题目：用*号输出字母C的图案。

#define _CRT_SECURE_NO_WARNINGS//压制宏
#include"graphics.h"
#include"stdio.h"
#include"windows.h"
#pragma comment(lib,"Winmm.lib")
struct rgb
{
	unsigned int r;
	unsigned int g;
	unsigned int b;
};
 
void image()
{
	struct rgb *RGB;
	IMAGE picture;
	DWORD *pic;
	FILE *fp_rgb;
	char pic_name[30];
	char pic_name1[30];
	printf("请输入图片信息如（yyk.jpg）\n");
	scanf("%s", pic_name);
	printf("请输入保存的文件信息\n");
	scanf("%s", pic_name1);
	loadimage(&picture, pic_name);//读取图片信息
	pic = GetImageBuffer(&picture);//获取设备显存
	unsigned int h = picture.getheight();//获取图片高度
	unsigned int w = picture.getwidth();//获取图片宽度
	RGB = (struct rgb *)malloc(sizeof(struct rgb)*h*w);//分配内存
	if (!(fp_rgb = fopen(pic_name1, "w")))//打开图片文件
	{
		printf("error");
		system("pause");
		return;
	}
	fprintf(fp_rgb, "(%d,%d)", h, w);//写入文件
	for (int i = 0; i<h*w; i++)
	{
		RGB->r = GetRValue(pic[i]);        
		RGB->g = GetGValue(pic[i]);
		RGB->b = GetBValue(pic[i]);						
		fprintf(fp_rgb, "(%d,%d,%d)", RGB->r, RGB->g, RGB->b);
	}
	fclose(fp_rgb);//关闭
	free(RGB);
	printf("SUCESS!");
}
 
int main()
{
	printf("【请将你所要处理的图片与该程序放入同一个文件夹】\n");
	image();
	system("pause");
	return 0;
}