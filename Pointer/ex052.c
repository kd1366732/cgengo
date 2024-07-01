#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int* p_a = &a, * p_b = &b;
	printf("Às‘OFa=%d\tb=%d\n", a, b);
	w = *p_a; //w=a
	*p_a = *p_b; //
}