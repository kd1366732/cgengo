#include<stdio.h>
main()
{
	int year;
	printf("西暦を入力：");
	scanf("%d", &year);
	if (year < 1989) {
		printf("昭和生まれです\n");
	}
	else {
		printf("平成生まれです\n");
	}
}