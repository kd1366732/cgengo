#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	//�\�[�g
	for (i = 4; i > 0; i--)//��r��
	{
		for (j = 0; j < i; j++)//��r��
		{
			if (d[j] > d[j + 1])
			{
				//����ւ�
				w = d[j];
				d[i] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("d[%d]:%d\n", i, d[i]);
	}
}