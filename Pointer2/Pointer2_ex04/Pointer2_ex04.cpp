/*
p.15 �迭 ������

�迭 �����ʹ� �迭�� ����Ű�� �������̴�.
*/
#include <stdio.h>

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int (*pa)[5];
	int i;

	pa = &a;		// �迭 �����Ϳ� �迭�� �ּҸ� ����
	
	for (i = 0; i < 5; i++)
		printf("%d \n", (*pa)[i]);	// �迭 �����ͷ� �迭 ��� ���
	
	return 0;
}
