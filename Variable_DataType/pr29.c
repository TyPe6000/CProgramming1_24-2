#include <stdio.h>		//printf 함수의 서식지정과 서식문자들

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);	//%o : 8진수 unsigned int
	printf("%x %#x \n", num2, num2);	//%x : 16진수 unsigned int(소문자)
	return 0;
}