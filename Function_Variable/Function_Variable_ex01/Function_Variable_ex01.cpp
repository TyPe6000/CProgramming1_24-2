#include <stdio.h>			// �Լ��� ����, p. 10 ���� 01

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		int temp = 1;		//temp�� for ����� ������ �� ���� �����Ǿ� �ʱ�ȭ
		printf("temp = %d\n", temp);
		temp++;
	}

	return 0;
}