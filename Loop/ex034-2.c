#include<stdio.h>
main()
{

	int num;
	printf("����?");
	scanf("%d", &num);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while ( i < 5);
		printf("\n");
		num--;
	} while (num > 0);

}