#include<stdio.h>
main()
{
	int n1, n2, n3, gokei;
	printf("�������R����:");
	scanf("%d%d%d", &n1,&n2,&n3);

	gokei = n1 + n2 + n3;

	printf("���v=%d  ", gokei);
	//printf("����=%.2f", gokei / 3.0); 
	printf("����=%.2f", (float)gokei / 3);

}