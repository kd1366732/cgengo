#include<stdio.h>
#include <string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

mian()
{
	struct fruit fdat;
	strcpy(fdat.name, "peach");
	fdat.price = 300;
	fdat.point = 5;
	fdat.number = 3;
	fdat.total = fdat.price * fdat.number;
	printf("商品名：%s\n", fdat.name);
	printf("価格：%d円\n", fdat.price);
	printf("おすすめ度：");
	for (int i = 0; i < fdat.point; i++) {
		printf("☆");
	}
	printf("\n個数 : %d個\n", fdat.number);
	printf("金額：\\%d-\n", fdat.total);
}