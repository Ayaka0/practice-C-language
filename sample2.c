//�z��̗v�f�̂������̗v�f��ʂ̔z��ɃR�s�[
#include<stdio.h>

int main(void) {

	int a[5];{}; //�R�s�[���z��
	int b[5];{}; //�R�s�[��z��

	int i; //�ϐ�i�̐ݒ�
	//�v�f�ɒl��ǂݍ���
	for (i = 0; i < 5; i++) { //�ϐ�i��0�Ai��5�𒴂���܂ŌJ��Ԃ��A���������s���邽�т�1�C���N�������g
		printf("a[%d] : ", i); //��ʕ\���Ascanf�œ��͂������l
		scanf_s("%d", &a[i]);
	}

	int count = 0; //�ϐ�count�̏������A�R�s�[�����v�f��
	for (i = 0; i < 5; i++)
		if (a[i] > 0)
			b[count++] = a[i];

	for (i = 0; i < count; i++)
		printf("b[%d] = %d\n", i, b[i]);

	return 0;
}