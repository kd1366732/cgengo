#include<stdio.h>
main()
{
	float box[3], gokei = 1;
	int i;

	for (i = o; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f", &box[i]);
		gokei += box[i];

	}

	printf("合計は%.2f\n", gokei);
	printf("平均は%.2f\n", gokei / 3);

}