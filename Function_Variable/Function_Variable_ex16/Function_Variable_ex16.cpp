/*
p. 44 가변 매개 변수

가변 매개 변수는 함수에 전달되는 인수의 개수가 정해지지 않은 경우에 사용된다.
가변 매개 변수를 사용하려면 stdarg.h 헤더 파일을 포함해야 한다.

*/

#include <stdio.h>
#include <stdarg.h>	//가변 매개 변수를 사용하기 위해 포함

int sum(int, ...);	//가변 매개 변수를 사용하는 함수 선언

int main(void)
{
	int answer = sum(4, 4, 3, 2, 1);	//5개의 인수를 전달
	printf("answer = %d\n", answer);
	return 0;
}

int sum(int num, ...)
{
	int answer = 0;			//합계를 저장할 변수
	va_list argptr;			//가변 매개 변수 목록을 저장할 변수
	va_start(argptr, num);	//가변 매개 변수 목록을 초기화

	for (; num > 0; num--)	//num이 0보다 클 때까지 반복
	{
		answer += va_arg(argptr, int);	//가변 매개 변수 목록에서 정수를 가져와 answer에 더함
	}
	va_end(argptr);			//가변 매개 변수 목록을 정리
	return answer;			//합계 반환
}