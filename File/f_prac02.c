#include<stdio.h>
main()
{
	int score = 0;
	char ch,max_name[20],name[20];
	FILE* fp;
	//score.txt����̓ǂݍ��ݏ���
	//�@�t�@�C���̃I�[�v��
	fp �� fopen("score.txt", "r");
	//�Amax_name,max_score�̓ǂݍ���
	fscanf(fp, "%s%d", max_name, &max_score);
	//�B�t�@�C���̃N���[�Y
	fclose(fp);
	//�C��ʏ�̍ō����_�҂̏���\��
	
	printf("�v���C���[�̖��O�F");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d ('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		//�t�@�C���������ݏ���
		//�@�t�@�C���̃I�[�v��
		fp = fopen("score.txt", "w");
		//�A�t�@�C���ւ�name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//�B�t�@�C���̃N���[�Y
		fclose(fp);
		printf("�n�C�X�R�A�X�V\n");
	}
}