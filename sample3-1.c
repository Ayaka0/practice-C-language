//��������̐����������J�E���g����

#include <stdio.h>

//������s���Ɋ܂܂�鐔�������̏o���񐔂�z��cnt�Ɋi�[
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {                      //s[i]�����������ł��邩�ǂ����̔��������
		if (s[i] >= '0' && s[i] <= '9')  //s[i]��0�ȏ�9�ȉ��ł��邱�Ƃ��m�F
			cnt[s[i] - '0']++;           //s[i]�����������ł����cnt[s[i] - 0]�̗v�f���C���N�������g����
			i++;
	}
}

int main(void)
{
	int dcnt[10] = { 0 }; //����10�̔z��dcnt���`���A���ׂĂ̗v�f��0�ŏ���������B
	char str[128] ;

	printf("���������͂���F");
	scanf_s("%s", str,128);

	str_dcount(str, dcnt);

	puts("���������̏o����");
	int i;
	for (i = 0; i < 10; i++)
		printf("'%d': %d\n", i, dcnt[i]);

	return 0;
}