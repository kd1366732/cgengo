//#include<stdio.h>
//#include <string.h>
//
//{
//	char name[20];
//	strcatday birth;
//	char blood[5];
//};
//
//main()
//{
//	struct profile student[5] = {
//		{"アーサー",{2000,2,1},"A"},
//		{"アーサー",{2000,1,14},"B"},
//        {"アーサー",{2000,5,14},"O"},
//        {"アーサー",{2000,2,4},"AB"},
//        {"アーサー",{2000,1,24},"A"},
//	};
//	struct profile* p;
//	int i;
//
//	p = student;
//
//	for (i = 0; i < 5; i++)
//	{
//		if ()
//		{
//			printf("%s--%d年%d月%d日生まれ　血液型ー%s"\n,
//				p->name,p->birth[0],p->birth[1],p->birth[2])
//		}
//		p++;
//	}
//}

#include <stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[NIN] = { { "AAAAA", 2000, 1, 1, "A" },
	{ "BBBBB", 1999, 2, 28, "B" },
	{ "CCCCC", 1998, 5, 1, "O" },
	{ "DDDDD", 1997, 12, 31, "AB"},
	{ "EEEEE", 1996, 2, 1, "A" } };
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}