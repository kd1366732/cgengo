#include<stdio.h>
main()
{
	char shori;
	int su1, su2;

	printf("��������́F");
	scanf("%c", &shori);

	printf("��������́F");
	scanf("%d%d",&su1,&su2);

	switch (shori)
	{
	case 'd':
		//�ő�l�����߂�
		if (su1 > su2)
		{
			printf("�ő�l��%d\n", su1);
		}
		else
		{
			printf("�ő�l��%d\n", su2);
		}
		break;
	case 's':
		//�ŏ��l�����߂�
		if (su1 < su2)
		{
			printf("�ŏ��l��%d\n", su1);
				break;
		}
		else
		{
			printf("�ŏ��l��%d\n", su2);
		}

	case 'g':
		//���v�����߂�
		printf("���v�́�d\n", su1 + su2);
		break;

	case 'h':
		//���ς����߂�
		printf("���ϒl��%.2f", (su1 + su2) / 2.0);
		break;

	}
}