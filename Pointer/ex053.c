#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, * w;
	printf("実行前：*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
	w = p_a;
	p_a = p_b;
	p_b = w;
	printf("実行後：*p_a=%d\t*p_b=%d\n", *p_a, *p_b);
}