#include<stdio.h>
void sumavg(int d1,int d2,int *sum,float *avg)
main()
{
	int d1, d2, sum;
	float avg;
	printf("整数を２つ入力：");
	scanf("%d%d", &d1, &d2);
	sumavg(&d1, &d2, &sum, &avg);
}
