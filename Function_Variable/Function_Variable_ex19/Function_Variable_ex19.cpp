/*
p. 52 �ִ� ����� ���ϱ�

�ִ� ������� ���ϴ� ������� ��Ŭ������ ȣ�����̶�� ����� �ִ�.
�� ����� �� �� x�� y�� �ִ� ������� y�� (x % y)�� �ִ� ������� ������
 x�� 0�� �ִ� ������� x��� ���̴�

*/

//�ִ� ������� ���ϴ� �Լ�
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
	printf("x = 30, y = 20�� ��, x�� y�� �ִ�����\n");
	printf("%d\n", gcd(30, 20));
	int x, y;
	printf("x =");
	scanf_s("%d", &x);
	printf("y =");
	scanf_s("%d", &y);
	printf("x�� y�� �ִ�����\n");
	printf("%d\n", gcd(x, y));
}

//x�� y���� Ŀ�� �Ѵ�.
int gcd(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x % y);
	}
}