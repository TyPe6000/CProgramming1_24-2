#include <stdio.h>	//�ǽ�1 : ������ ���� ���� �� ������ �� Ȯ��
					//Windows 64bit
int main()
{
	int i = 10;
	float f = 12.3;
	int* pi = NULL;

	float* pf = NULL;
	pi = &i;
	pf = &f;

	printf("%p %p \n", pi, &i);
	printf("%p %p \n", pf, &f);

	return 0;
}