#include<stdio.h>
void display1(int na);
void display2(int* n2);
main()
{
	int a, b;
	printf("���la ?:");
	scanf("%d", &a);
	display(a);
	printf("a = %d\n\n", a);
	printf("���lb ?:");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n\n", b);
}

void display1(int n)
{
	printf("���la�́A%d�ł�\n", n);
	n += 10;
	return;
}

void display2(int *n)
{
	printf("���lb�́A%d�ł�\n", *n);
	*n += 10;
	return;
}