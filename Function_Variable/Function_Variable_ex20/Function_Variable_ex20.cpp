/*
p. 54 Mini Project: �ϳ��� ž ����

������ ���� A�� �׿��ִ� ���� 3���� ���� C�� �ű�� ���̴�. �� ������ ������ ���Ѿ� �Ѵ�.
	�� ���� �ϳ��� ���Ǹ� �̵��� �� �ִ�
	�� ���� �ִ� ���Ǹ� �̵��� �� �ִ�
	ũ�Ⱑ ���� ���� ���� ū ������ ���� �� ����.
	�߰��� ���븦 �ӽ������� �̿��� �� ������ ���� ���ǵ��� ���Ѿ� �Ѵ�.
*/

/*
�˰���
// ���� from�� �׿��ִ� n���� ������ ���� tmp�� ����Ͽ� ���� to�� �ű��.// ���� from�� �׿��ִ� n���� ������ ���� tmp�� ����Ͽ� ���� to�� �ű��.
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		from���� to�� ������ �ű��.
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		from�� �ִ� �ϳ��� ������ to�� �ű��.
		hanoi_tower(n - 1, tmp, from, to);
	}
}
*/

#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("%c���� %c�� ���� 1�� �ű��.\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("%c���� %c�� ���� %d�� �ű��.\n", from, to, n);
		hanoi_tower(n - 1, tmp, from, to);
	}
}