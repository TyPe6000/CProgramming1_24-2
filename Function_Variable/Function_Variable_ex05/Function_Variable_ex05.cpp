#include <stdio.h>			//p.16 전역 변수의 초기값

int counter;				//전역 변수 counter
							//전역 변수는 자동으로 0으로 초기화됨
int main(void)
{
	printf("counter = %d\n", counter);

	return 0;
}