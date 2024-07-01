#include <stdio.h>
int strcnt(char* p); /* プロトタイプ宣言 */
main()
{
	char buf[256];
	int mojisu;
	printf("文字列?:");
	gets(buf); /* キーボードから文字列を入力 */
	mojisu = strcnt(buf); /* 関数strcntの呼び出し */
	printf("入力された文字列の文字数は%d文字です。\n", mojisu);
}
/* 関数strcntの記述 */
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return (cnt);
}