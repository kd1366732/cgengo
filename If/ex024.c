#include<stdio.h>
main()
{
	char ch;

	printf("��������́F");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}