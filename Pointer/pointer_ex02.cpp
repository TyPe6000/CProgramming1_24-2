//�ǽ�2 : ������ �ǽ�(2)
#include <stdio.h>

int main()
{
	int i = 3000;
	int* p = NULL;

	p = &i;						//p�� i�� �ּ�

	printf("p = %p\n", p);		//p�� i�� �ּ�
	printf("&i = %p\n\n", &i);	//&i�� i�� �ּ�
	printf("i = %d\n", i);		
	printf("*p = %d\n", *p);	//*p�� p�ּҿ� �ִ� �� i

	return 0;
}