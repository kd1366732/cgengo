#include<stdio.h>
main()
{
	int d[11] = { 10, 5, 30, 77, 16, 3, 47, 29, 37, 33 };
	int i, s;
	printf("探索値sを入力:");
	scanf("%d", &s);
	//線形探索の改良(番兵法)1
	//for文を使用した空文で記述
	for (d[10] = s, i = 0; s != d[i]; i++); //空文
	/*
	//線形探索の改良(番兵法)2
	//普通にwhile文で記述
	
	d[10] = s;
	i = 0;
	while (s != d[i]) {
	i++;
	}
	*/
	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dを、d[%d]で発見!\n", s, i);
	}
}