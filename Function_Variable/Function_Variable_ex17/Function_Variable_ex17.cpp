/*
��ȯ(recursion)

�Լ��� �ڱ� �ڽ��� ȣ���� ���� �ִ�. �̰��� ��ȯ(recursion)��� �θ���.

p. 49 ���丮�� ���

*/

#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int x = 0;
	long f;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf(" %d!�� %d�Դϴ�. \n", x, factorial(x));

	return 0;
}
