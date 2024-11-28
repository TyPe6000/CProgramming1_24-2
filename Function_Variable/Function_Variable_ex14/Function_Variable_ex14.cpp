/*
p. 37 블록에서 extern을 이용한 전역 변수 참조

extern은 블록에서 전역 변수에 접근할 때도 사용된다.
extern 키워드를 사용하면 다른 파일에서 선언된 전역 변수를 참조할 수 있다.
*/

#include <stdio.h>

int x = 50;

int main(void)
{
	int x = 100;
	{
		extern int x;			//main 외부에서 선언된 전역 변수 x를 참조
		printf("x= %d\n", x);	//전역 변수 x의 값인 50이 출력
	}
	printf("x= %d\n", x);		//지역 변수 x의 값인 100이 출력
	return 0;
}
