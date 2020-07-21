/**************************************************************
*此为数组初始化为零案例程序
*
*14/5/2019
*vincent you
*nanshan hi-tech park ShenZhen
***************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int(*p1)[4];
int main()
{
	int a[3][4] = {{2,3,4,15},{3,22,44,1636},{77,66,55,233}};
	int(*p)[4] = a;
	p1(pa)[3];
	pa[0] = a;
	//printf("%d\n",*(*(a+2)+3));
	printf("%d\n",*(a[1]+3));
	printf("%d\n",*(p[2]+1));
	printf("%d\n",*(*pa[0]));
	//int* p[3] = a;
}