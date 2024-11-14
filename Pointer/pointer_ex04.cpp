//실습4 : 포인터 실습(4)
#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i= %d\n", i);

	*p = 20;				//*p(포인터)로 i(변수)값을 변경할 수 있다.
	printf("i= %d\n", i);

	return 0;
}