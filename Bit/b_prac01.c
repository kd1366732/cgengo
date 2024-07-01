#include<stdio.h>
#include<stdlib.h>

enum BitState
{
	Base = 0,             //00000000 通常状態
	Poison = 1 << 0,      //00000001 毒状態
	Sleep = 1 << 1,       //00000010 眠り状態
	Paralysis = 1 << 2,   //00000100 麻痺状態
	Burn = 1 << 3,        //00001000 火傷状態
	AtkUp = 1 << 4,       //00010000 攻撃力アップ状態
	AtkDown = 1 << 5      //00100000 攻撃力ダウン状態
};
typedef unsigned int UNIT;
void DisplayStatus(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT* s);

typedef struct {   //スキル型構造体
	char name[20]; //スキル名
	int type;      //スキルの種類
	int use_mp;    //使用MP
	int effect;    //スキル効果
}; Skill;

typedef struct {   //chara型構造体
	char name[20]; //名前
	int hp;         //HP
	int atk;        //攻撃力
	int def;        //防御　
	UNIT state;     //状態
}; Spec;

typedef struct {   
	Spec sp; 
	int maxhp;      
	int mp;    
	Skill skl[Skil_Num];    
}; Chara;

typedef struct {
	Spec sp;
	int rate;
};Mod

main()
{
	UNIT MyState = Base;
	//MyState |= (Poison | Sleep);
	//MyState |= Poison;
	//MyState |= Sleep; ２文を合わせたもの
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UNIT s)
{
	printf("****現状の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("通常状態\n");
	}
	printf("*********************\n");
}
void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");
		printf("１：毒　２：睡眠　３：麻痺　４：火傷　５：攻撃↑　６：攻撃↓　０：終了＞")
			scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;

		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;

		default:
			break;
		}
	}
}
void ClearFlg(UNIT* s)
{
	int a;
	while (1)
	{
		pritnf("どの状態を解除しますか？\n");
		printf("１：毒　２：睡眠　３：麻痺　４：火傷　５：攻撃↑　６：攻撃↓　０：終了＞")
			scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;

		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;

		default:
			break;
		}

	}
}