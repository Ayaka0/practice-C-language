#include<stdio.h>

void put_string(const char* s)
{
	while (*s) {
		putchar(*s);
		s++;
	}
	putchar('\n');
}

int main() {
	char str[] = "Hello, World!";

	put_string(str);

	return 0;
}
