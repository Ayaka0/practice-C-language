//学生の身長を読み込んでソート
#include <stdio.h>

#define NUMBER 5 //人数

//バブルソート
void bsort(int a[], int n) //bsort関数の定義、int型の要素を持つ配列aを受け取り、要素数nを引数としてソートする
{
	int i, j;
	for (i = 0; i < n - 1; i++) { //iを0からn-1まで順番に増やしながらループを実行する。ソート対象の配列を先頭から順に走査する。
		for (j = n - 1; j > i; j--) { //jをn-1からiまでデクリメントしながらループ実行。ソート対象の配列を末尾から順に比較と入れ替えをする
			if (a[j - 1] > a[j]) { //a[j - 1] が a[j] より大きい場合、要素の入れ替えを行う。大きい要素が徐々に配列の末尾へ移動していく。
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int height[NUMBER]; //int 型の配列 height を宣言。この配列は NUMBER 人分の学生の身長を格納。

	printf("%d人の身長を入力せよ。\n", NUMBER); //プロンプトを表示して、学生の人数を入力するように促します。
	int i;
	for (i = 0; i < NUMBER; i++) { //for ループを使用して、学生の身長を順番に入力。i が 0 から NUMBER - 1 まで変化する間、身長を入力し height 配列に格納。
		printf("%2d番：", i + 1);
		scanf_s("%d", &height[i]);
	}

	bsort(height, NUMBER); //bsort 関数を呼び出して、height 配列をソート。

	puts("昇順にソートしました。"); //文字列を出力。
	for (i = 0; i < NUMBER; i++) //for ループを使用して、ソートされた身長を順番に出力。
		printf("%2d番：%d\n", i + 1, height[i]);

	return 0; //プログラムの正常終了を示すために、0 を返す。
}