#include <stdio.h>			//p.17 ���� ������ ���

int x;
void sub();

int main(void)
{
	for (x = 0; x < 10; x++) {
		sub();
	}
}

void sub()
{
	for (x = 0; x < 10; x++) {
		printf("*");
	}
}