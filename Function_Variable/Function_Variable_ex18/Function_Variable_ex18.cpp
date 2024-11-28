/*
p. 50 2진수 형식으로 출력하기

C에는 정수를 2진수로 출력하는 기능이 없다.
이 기능을 순환 호출을 이용하여 구현하여 보자.

*/

//2진수로 변환하여 출력하는 함수
#include <stdio.h>

void print_binary(int x);

int main(void)
{
	print_binary(9);
	printf("\n");
	return 0;
}

void print_binary(int x)
{
	if (x == 0)
	{
		printf("0");
	}
	else
	{
		print_binary(x / 2);	//재귀 호출
		printf("%d", x % 2);	//나머지 출력
	}
}

