/*
p.46 void 포인터

순수하게 메모리 주소만을 저장하는 포인터를 void 포인터라고 한다.
void 포인터는 어떤 자료형의 주소도 저장할 수 있는 포인터이다.
*/
#include <stdio.h>

void memzero(void* ptr, size_t len)
{
	for (; len > 0; len--) {
		*(char*)ptr = 0;	// void 포인터를 char 포인터로 캐스팅
	}
}

int main(void)
{
	char a[10];
	memzero(a, sizeof(a));

	int b[10];
	memzero(b, sizeof(b));

	double c[10];
	memzero(c, sizeof(c));

	return 0;
}
