//실습11 : 포인터와 배열
// 포인터와배열의관계
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);			//a를 입력했는데 a[0]과 같다
									//배열의 첫 요소의 주소 a
	return 0;
}