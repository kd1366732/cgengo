#include<stdio.h>
main()
{
	int num, i;
	printf("数を入れて");
	scanf("%d", &num);
	while (num > 0){
		printf("*");
		num--;
	}
}