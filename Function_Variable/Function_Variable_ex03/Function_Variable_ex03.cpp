#include <stdio.h>			//p.13 �Լ��� �Ű� ����

int inc(int counter);		//�Լ��� ���� ����

int main(void)
{
	int i;

	i = 10;
	printf("�Լ� ȣ�� �� i = %d\n", i);
	inc(i);					//���� ���� ȣ��(call by value)
	printf("�Լ� ȣ�� �� i = %d\n", i);

	return 0;
}

int inc(int counter)		//�Ű� ������ ������ ���� ����
{
	counter++;
}