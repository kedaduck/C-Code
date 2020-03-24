// 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#include <stdio.h>
#include <stdlib.h>

int main(){
	float numerator = 2, denominator = 1;
	float sum = 0;
	for (int i = 0; i < 20; ++i){
			float tmp = numerator / denominator;
			sum += tmp;
			int priorNumerator = numerator;
			numerator = numerator + denominator;
			denominator = priorNumerator;
	}

	printf("%f\n", sum);
    system("pause");

	return 0;
}