//��������R�s�[����

#include <stdio.h>

//������s��d�ɃR�s�[����
char *str_copy(char *d, const char *s)
{ 
	char *t = d;
	while (*d++ = *s++)
		return t;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("�R�s�[����̂́F%s", tmp);
	scanf_s("%s",tmp, 128);

	str_copy(str, tmp);

	printf("str = \"%s\"\n", str);

	return 0;
}