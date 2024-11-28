#include <stdio.h>			//p.17 전역 변수의 사용

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