//�ǽ�11 : �����Ϳ� �迭
// �����Ϳ͹迭�ǰ���
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);			//a�� �Է��ߴµ� a[0]�� ����
									//�迭�� ù ����� �ּ� a
	return 0;
}