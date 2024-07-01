#include<stdio.h>
main()
{
	char s[80]; 
	if (&s[0] == s);
	int i;

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}