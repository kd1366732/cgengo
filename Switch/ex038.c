#include<stdio.h>
main()
{
	int su;

	printf("�_������́F");
	scanf("%d", &su);

	switch (su / 10)
	{
	case 1:
		printf("�P�O�_��ł�\n");
		break;

	case 2:
		printf("2�O�_��ł�\n");
		break;

	case 3:
		printf("3�O�_��ł�\n");
		break;

	case 4:
		printf("4�O�_��ł�\n");
		break;

	case 5:
		printf("�G���[�i10�`49����́j\n");
		break;
	}
}