//�w���̐g����ǂݍ���Ń\�[�g
#include <stdio.h>

#define NUMBER 5 //�l��

//�o�u���\�[�g
void bsort(int a[], int n) //bsort�֐��̒�`�Aint�^�̗v�f�����z��a���󂯎��A�v�f��n�������Ƃ��ă\�[�g����
{
	int i, j;
	for (i = 0; i < n - 1; i++) { //i��0����n-1�܂ŏ��Ԃɑ��₵�Ȃ��烋�[�v�����s����B�\�[�g�Ώۂ̔z���擪���珇�ɑ�������B
		for (j = n - 1; j > i; j--) { //j��n-1����i�܂Ńf�N�������g���Ȃ��烋�[�v���s�B�\�[�g�Ώۂ̔z��𖖔����珇�ɔ�r�Ɠ���ւ�������
			if (a[j - 1] > a[j]) { //a[j - 1] �� a[j] ���傫���ꍇ�A�v�f�̓���ւ����s���B�傫���v�f�����X�ɔz��̖����ֈړ����Ă����B
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int height[NUMBER]; //int �^�̔z�� height ��錾�B���̔z��� NUMBER �l���̊w���̐g�����i�[�B

	printf("%d�l�̐g������͂���B\n", NUMBER); //�v�����v�g��\�����āA�w���̐l������͂���悤�ɑ����܂��B
	int i;
	for (i = 0; i < NUMBER; i++) { //for ���[�v���g�p���āA�w���̐g�������Ԃɓ��́Bi �� 0 ���� NUMBER - 1 �܂ŕω�����ԁA�g������͂� height �z��Ɋi�[�B
		printf("%2d�ԁF", i + 1);
		scanf_s("%d", &height[i]);
	}

	bsort(height, NUMBER); //bsort �֐����Ăяo���āAheight �z����\�[�g�B

	puts("�����Ƀ\�[�g���܂����B"); //��������o�́B
	for (i = 0; i < NUMBER; i++) //for ���[�v���g�p���āA�\�[�g���ꂽ�g�������Ԃɏo�́B
		printf("%2d�ԁF%d\n", i + 1, height[i]);

	return 0; //�v���O�����̐���I�����������߂ɁA0 ��Ԃ��B
}