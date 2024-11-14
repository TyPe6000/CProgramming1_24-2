//실습2 : 포인터 실습(2)
#include <stdio.h>

int main()
{
	int i = 3000;
	int* p = NULL;

	p = &i;						//p는 i의 주소

	printf("p = %p\n", p);		//p는 i의 주소
	printf("&i = %p\n\n", &i);	//&i는 i의 주소
	printf("i = %d\n", i);		
	printf("*p = %d\n", *p);	//*p는 p주소에 있는 값 i

	return 0;
}