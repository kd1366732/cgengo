#include<stdio.h>
main()
{
	FILE* fp;
	int lv, hp;
	char c,str[256],equip;
	fp = fopen("file02.txt", "r");
	fscanf(fp, "%s", str);
	printf("����1:%s\n", str);
	fscanf(fp, "%s", str);
	printf("����2:%s\n", str);
	fscanf(fp, "%s", str);
	printf("����3:%s\n", str);
	//fgets�̗�
	c = fgetc(fp);
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	pritnf("lv:%d hp:%d ����:%s\n", lv, hp, equip);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);
	fclose(fp);
}