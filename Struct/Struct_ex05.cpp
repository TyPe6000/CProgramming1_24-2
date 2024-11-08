#include <stdio.h>		//실습5: 공용체
						//공용체는 같은 메모리 영역을 여러 변수가 공유함
union example {			//선언과 사용에서는 구조체와 유사
	int i;
	char c;
};

int main()
{
	union example v;

	v.c = 'A';
	printf("v.c:%c   v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c   v.i:%i\n", v.c, v.i);

}

