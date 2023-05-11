//2つの整数の大きい方の値を求める

#include <stdio.h>
//大きい方の値を返す
int max2(int a, int b) //関数の定義、関数名max2、仮引数はinta,int b
{
	if (a > b) //aの方がbより大きい場合
		return a; //返却値aを返す
	else //bがaより大きい場合
		return b; //bを返す
}

int main(void)
{
	int n1, n2; //変数n1,n2の設定

	puts("2つの整数を入力せよ"); //画面表示
	printf("整数１："); scanf_s("%d", &n1);
	printf("整数２："); scanf_s("%d", &n2);

	printf("大きいほうの値は%dです。\n", max2(n1, n2)); //max2(n1,n2)は実引数

	return 0;
}