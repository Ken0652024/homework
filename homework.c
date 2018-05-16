#include <stdio.h>
int main(void)
{
	int english;
	int math;
	int sum;
	printf("輸入英文成績=>");
	scanf("%d" , &english);
	printf("輸入數學成績=>");
	scanf("%d" , &math);
	sum = english + math;
	printf("成績總分 = %d\n" , sum);
	return 0;
}
