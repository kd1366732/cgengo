#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	ia = 0; //この列があれば下２行は不要
	//printf("数を入れて");
	//scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("合計=%d\n", goukei;)
}