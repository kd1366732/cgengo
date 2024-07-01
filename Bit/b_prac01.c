#include<stdio.h>
#include<stdlib.h>

enum BitState
{
	Base = 0,             //00000000 �ʏ���
	Poison = 1 << 0,      //00000001 �ŏ��
	Sleep = 1 << 1,       //00000010 ������
	Paralysis = 1 << 2,   //00000100 ��჏��
	Burn = 1 << 3,        //00001000 �Ώ����
	AtkUp = 1 << 4,       //00010000 �U���̓A�b�v���
	AtkDown = 1 << 5      //00100000 �U���̓_�E�����
};
typedef unsigned int UNIT;
void DisplayStatus(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT* s);

typedef struct {   //�X�L���^�\����
	char name[20]; //�X�L����
	int type;      //�X�L���̎��
	int use_mp;    //�g�pMP
	int effect;    //�X�L������
}; Skill;

typedef struct {   //chara�^�\����
	char name[20]; //���O
	int hp;         //HP
	int atk;        //�U����
	int def;        //�h��@
	UNIT state;     //���
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
	//MyState |= Sleep; �Q�������킹������
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UNIT s)
{
	printf("****����̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���\n");
	}
	printf("*********************\n");
}
void ChangeFlg(UNIT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("�P�F�Ł@�Q�F�����@�R�F��Ⴡ@�S�F�Ώ��@�T�F�U�����@�U�F�U�����@�O�F�I����")
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
		pritnf("�ǂ̏�Ԃ��������܂����H\n");
		printf("�P�F�Ł@�Q�F�����@�R�F��Ⴡ@�S�F�Ώ��@�T�F�U�����@�U�F�U�����@�O�F�I����")
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