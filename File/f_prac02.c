#include<stdio.h>
main()
{
	int score = 0;
	char ch,max_name[20],name[20];
	FILE* fp;
	//score.txtからの読み込み処理
	//�@ファイルのオープン
	fp ＝ fopen("score.txt", "r");
	//�Amax_name,max_scoreの読み込み
	fscanf(fp, "%s%d", max_name, &max_score);
	//�Bファイルのクローズ
	fclose(fp);
	//�C画面上の最高得点者の情報を表示
	
	printf("プレイヤーの名前：");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d ('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		//ファイル書き込み処理
		//�@ファイルのオープン
		fp = fopen("score.txt", "w");
		//�Aファイルへのnameとscoreの書き込み
		fprintf(fp, "%s\n%d\n", name, score);
		//�Bファイルのクローズ
		fclose(fp);
		printf("ハイスコア更新\n");
	}
}