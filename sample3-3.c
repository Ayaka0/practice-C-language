//ポインタ（アドレス演算子＆と関節演算子＊）

#include <stdio.h>

int main(void)
{
	int n = 57; //int型の変数nを宣言し、値57を格納
	printf("n  = %d\n", n); //nの値を表示
	printf("&n = %p\n", &n); //＆演算子を使用して、変数nのアドレスを表示

	int *p = &n; //int型のポインタ変数pを宣言し、&nを代入する。pは変数nのアドレスを指している。
	printf("p = %p\n", p); //pの値（nのアドレス）を表示
	printf("*p = %d\n", *p); //*演算子を使用し、Pの指すアドレスの値を取得して表示。*pはnの値に相当する。


	return 0;
}