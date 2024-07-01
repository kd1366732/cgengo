#include<stdio.h>
main()
{
	int su;

	printf("点数を入力：");
	scanf("%d", &su);

	switch (su / 10)
	{
	case 1:
		printf("１０点台です\n");
		break;

	case 2:
		printf("2０点台です\n");
		break;

	case 3:
		printf("3０点台です\n");
		break;

	case 4:
		printf("4０点台です\n");
		break;

	case 5:
		printf("エラー（10～49を入力）\n");
		break;
	}
}