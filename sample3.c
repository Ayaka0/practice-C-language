//������𑖍����ĕ\������

#include<stdio.h>

//������s��\��
void put_string(const char s[])
{
	int i = 0;
	while (s[i]) //������s[i]���`�F�b�N�Bs�z���i�Ԗڂ̗v�f���w���B������̏I�[�̃k���������o��܂Ń��[�v���s
		putchar(s[i++]); //s[i]�̏o�́Bi�̒l���C���N�������g���Ď��̕����ɐi�ށBwhile���[�v��s�����Ԃɑ������A�e������putchar�֐��ňꕶ�����\������B
}

int main(void)
{
	char str[128];

	printf("���������͂���F");
	scanf_s("%s",str);

	printf("���Ȃ���");
	put_string(str);
	printf("�Ɠ��͂��܂��� / n");

	return 0;
}