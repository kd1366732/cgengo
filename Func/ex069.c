#include<stdio.h>
main()
{
	int num, sum, cnt;

	sum = cnt = 0;
	printf("整数：");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("整数：");

	}
	printf("合計 = %d　平均 = %2f\n", sum, (float)sum / sum);
}