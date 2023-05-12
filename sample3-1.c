//文字列内の数字文字をカウントする

#include <stdio.h>

//文字列s内に含まれる数字文字の出現回数を配列cntに格納
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {                      //s[i]が数字文字であるかどうかの判定をする
		if (s[i] >= '0' && s[i] <= '9')  //s[i]が0以上9以下であることを確認
			cnt[s[i] - '0']++;           //s[i]が数字文字であればcnt[s[i] - 0]の要素をインクリメントする
			i++;
	}
}

int main(void)
{
	int dcnt[10] = { 0 }; //長さ10の配列dcntを定義し、すべての要素を0で初期化する。
	char str[128] ;

	printf("文字列を入力せよ：");
	scanf_s("%s", str,128);

	str_dcount(str, dcnt);

	puts("数字文字の出現回数");
	int i;
	for (i = 0; i < 10; i++)
		printf("'%d': %d\n", i, dcnt[i]);

	return 0;
}