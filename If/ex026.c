#include<stdio.h>
main()
{
	int m;
	printf("月を入力：");
	scanf("%d,&m");

	if (m == 2) {
		printf("最終日は28日です\n");
	}
	else {
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			printf("最終日は30日です\n");
		}
		else {
			printf("最終日は31日です\n");
		}
	}
}