#include <stdio.h>		//printf 함수의 서식지정과 서식문자들

int main()
{
	int myAge = 12;
	printf("제 나이는 10진수로 %d살, 16진수로 %X살입니다. \n", myAge, myAge);
	return 0;
}

// %d : 부호 있는 10진수 정수 (char, short, int)
// // %X : 부호 없는 16진수 정수 (unsigned int)