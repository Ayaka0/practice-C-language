//�|�C���^�i�A�h���X���Z�q���Ɗ֐߉��Z�q���j

#include <stdio.h>

int main(void)
{
	int n = 57; //int�^�̕ϐ�n��錾���A�l57���i�[
	printf("n  = %d\n", n); //n�̒l��\��
	printf("&n = %p\n", &n); //�����Z�q���g�p���āA�ϐ�n�̃A�h���X��\��

	int *p = &n; //int�^�̃|�C���^�ϐ�p��錾���A&n��������Bp�͕ϐ�n�̃A�h���X���w���Ă���B
	printf("p = %p\n", p); //p�̒l�in�̃A�h���X�j��\��
	printf("*p = %d\n", *p); //*���Z�q���g�p���AP�̎w���A�h���X�̒l���擾���ĕ\���B*p��n�̒l�ɑ�������B


	return 0;
}