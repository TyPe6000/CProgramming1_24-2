/*
p.15 배열 포인터

배열 포인터는 배열을 가리키는 포인터이다.
*/
#include <stdio.h>

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int (*pa)[5];
	int i;

	pa = &a;		// 배열 포인터에 배열의 주소를 대입
	
	for (i = 0; i < 5; i++)
		printf("%d \n", (*pa)[i]);	// 배열 포인터로 배열 요소 출력
	
	return 0;
}
