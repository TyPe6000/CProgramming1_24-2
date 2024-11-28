#include <stdio.h>			//p.19 같은 이름의 전역 변수와 지역 변수

int sum = 1;				//전역 변수 sum

int main(void)
{
	int sum = 0;			//지역 변수 sum

	printf("sum = %d\n", sum);

	return 0;
}
// 전역 변수와 지역 변수의 이름이 같을 때는 지역 변수가 우선적으로 사용됨