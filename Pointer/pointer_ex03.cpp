//�ǽ�3 : ������ �ǽ�(3)

#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;

	printf("p = %p\n", p);
	printf("*p = %u\n\n", *p);	//x

	p = &y;

	printf("p = %p\n", p);		//�ּ� ���� �ٲ��
	printf("*p = %u\n", *p);	//y

	return 0;
}