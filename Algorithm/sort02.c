#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	//ƒ\[ƒg
	for (i = 4; i > 0; i--)//”äŠrŒ³
	{
		for (j = 0; j < i; j++)//”äŠræ
		{
			if (d[j] > d[j + 1])
			{
				//“ü‚ê‘Ö‚¦
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