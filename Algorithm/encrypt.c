#include <stdio.h>
main()
{
	char s[80];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", &s[0]);
}