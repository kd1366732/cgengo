#include<stdio.h>
main()
{
	char moji;

	printf("大文字１文字入力:");
	scanf("%c",&moji);

	printf("小文字に変換して %c\n", moji + 0x20);;
}