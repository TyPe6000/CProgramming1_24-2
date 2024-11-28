#include <stdio.h>			//p.13 함수의 매개 변수

int inc(int counter);		//함수의 원형 선언

int main(void)
{
	int i;

	i = 10;
	printf("함수 호출 전 i = %d\n", i);
	inc(i);					//값에 의한 호출(call by value)
	printf("함수 호출 후 i = %d\n", i);

	return 0;
}

int inc(int counter)		//매개 변수는 일종의 지역 변수
{
	counter++;
}