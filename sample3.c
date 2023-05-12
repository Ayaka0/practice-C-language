//文字列を走査して表示する

#include<stdio.h>

//文字列sを表示
void put_string(const char s[])
{
	int i = 0;
	while (s[i]) //条件式s[i]をチェック。s配列のi番目の要素を指す。文字列の終端のヌル文字が出るまでループ実行
		putchar(s[i++]); //s[i]の出力。iの値をインクリメントして次の文字に進む。whileループはsを順番に走査し、各文字をputchar関数で一文字ずつ表示する。
}

int main(void)
{
	char str[128];

	printf("文字列を入力せよ：");
	scanf_s("%s",str);

	printf("あなたは");
	put_string(str);
	printf("と入力しました / n");

	return 0;
}