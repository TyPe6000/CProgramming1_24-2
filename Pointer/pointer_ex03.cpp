//실습3 : 포인터 실습(3)

#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;

	printf("p = %p\n", p);
	printf("*p = %u\n\n", *p);	//x

	p = &y;

	printf("p = %p\n", p);		//주소 정보 바뀐다
	printf("*p = %u\n", *p);	//y

	return 0;
}