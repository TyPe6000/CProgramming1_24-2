/*
p. 50 2���� �������� ����ϱ�

C���� ������ 2������ ����ϴ� ����� ����.
�� ����� ��ȯ ȣ���� �̿��Ͽ� �����Ͽ� ����.

*/

//2������ ��ȯ�Ͽ� ����ϴ� �Լ�
#include <stdio.h>

void print_binary(int x);

int main(void)
{
	print_binary(9);
	printf("\n");
	return 0;
}

void print_binary(int x)
{
	if (x == 0)
	{
		printf("0");
	}
	else
	{
		print_binary(x / 2);	//��� ȣ��
		printf("%d", x % 2);	//������ ���
	}
}

