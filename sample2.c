//配列の要素のうち正の要素を別の配列にコピー
#include<stdio.h>

int main(void) {

	int a[5];{}; //コピー元配列
	int b[5];{}; //コピー先配列

	int i; //変数iの設定
	//要素に値を読み込む
	for (i = 0; i < 5; i++) { //変数iは0、iが5を超えるまで繰り返す、処理を実行するたびに1インクリメント
		printf("a[%d] : ", i); //画面表示、scanfで入力した数値
		scanf_s("%d", &a[i]);
	}

	int count = 0; //変数countの初期化、コピーした要素数
	for (i = 0; i < 5; i++)
		if (a[i] > 0)
			b[count++] = a[i];

	for (i = 0; i < count; i++)
		printf("b[%d] = %d\n", i, b[i]);

	return 0;
}