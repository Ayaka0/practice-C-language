//4�l�̊w����3�Ȗڂ̃e�X�g2�񕪂̍��v�����߂ĕ\��

#include <stdio.h>

int main(void)
{
	int tensu1[4][3] = { {91,63,78}, {67,72,46},{89,34,53}, {32,54,34} }; //1��ڂ̓_��
	int tensu2[4][3] = { {97,67,82}, {73,43,46},{97,56,21}, {85,46,35} }; //2��ڂ̓_��
	int sum[4][3]; //1��ڂ�2��ڂ̍��v

	//2�񕪂̓_���̍��v�����߂�
	int i, j;                  //�ϐ�i,j�̐ݒ�
	for (i = 0; i < 4; i++) { //i�̏������A�c4��J��Ԃ��A�������邲�ƂɃC���N�������g�A4�l��
		for (j = 0; j < 3; j++) //j�̏������A��3��̌J��Ԃ��A�������邲�ƂɃC���N�������g�A3�Ȗ�
			sum[i][j] = tensu1[i][j] + tensu2[i][j]; //2�񕪂����Z
	}

	//1��ڂ̓_����\��
	puts("1��ڂ̓_��"); //��ʂɕ\��
	for (i = 0; i < 4; i++) { //i�̏������A4��J��Ԃ��A�������邲�ƂɃC���N�������g
		for (j = 0; j < 3; j++) //j�̏������A3��J��Ԃ��A�������邲�ƂɃC���N�������g
			printf("%4d", tensu1[i][j]); //��ʂɕ\���A1��ڂ̓_��
		putchar('\n');
	}

	//2��ڂ̓_����\��
	puts("1��ڂ̓_��"); //��ʂɕ\��
	for (i = 0; i < 4; i++) { //i�̏������A4��J��Ԃ��A�������邲�ƂɃC���N�������g
		for (j = 0; j < 3; j++) //j�̏������A3��J��Ԃ��A�������邲�ƂɃC���N�������g
			printf("%4d", tensu2[i][j]); //��ʕ\���A2��ڂ̓_��
		putchar('\n');
	}

	//���v�_��\��
	puts("���v�_");
	for (i = 0; i < 4; i++) { //i�̏������A4��J��Ԃ��A�������邲�ƂɃC���N�������g
		for (j = 0; j < 3; j++) //j�̏������A3��J��Ԃ��A�������邲�ƂɃC���N�������g
			printf("%4d", sum[i][j]); //��ʕ\���A���v�_
		putchar('\n');
	}

	return 0;
}