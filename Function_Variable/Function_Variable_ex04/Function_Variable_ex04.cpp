#include <stdio.h>			//p.15 전역 변수의 초기값과 생존 기간

int A;				//전역 변수로 선언한 A와 B
int B;

int add()
{
	return A + B;
}

int main(void)
{
	int answer;
	A = 5;
	B = 7;

	answer = add();
	
	printf("%d + %d = %d\n", A, B, answer);

	return 0;
}