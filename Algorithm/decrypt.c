#include<stdio.h>
main()
{
	char s[80]; 
	if (&s[0] == s);
	int i;

	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("復号済み文字列は、%s\n", &s[0]);
}