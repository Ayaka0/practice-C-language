//2�̐����̑傫�����̒l�����߂�

#include <stdio.h>
//�傫�����̒l��Ԃ�
int max2(int a, int b) //�֐��̒�`�A�֐���max2�A��������inta,int b
{
	if (a > b) //a�̕���b���傫���ꍇ
		return a; //�ԋp�la��Ԃ�
	else //b��a���傫���ꍇ
		return b; //b��Ԃ�
}

int main(void)
{
	int n1, n2; //�ϐ�n1,n2�̐ݒ�

	puts("2�̐�������͂���"); //��ʕ\��
	printf("�����P�F"); scanf_s("%d", &n1);
	printf("�����Q�F"); scanf_s("%d", &n2);

	printf("�傫���ق��̒l��%d�ł��B\n", max2(n1, n2)); //max2(n1,n2)�͎�����

	return 0;
}