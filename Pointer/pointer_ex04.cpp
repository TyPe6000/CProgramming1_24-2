//�ǽ�4 : ������ �ǽ�(4)
#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i= %d\n", i);

	*p = 20;				//*p(������)�� i(����)���� ������ �� �ִ�.
	printf("i= %d\n", i);

	return 0;
}