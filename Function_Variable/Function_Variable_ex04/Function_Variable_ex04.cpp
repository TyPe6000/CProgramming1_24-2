#include <stdio.h>			//p.15 ���� ������ �ʱⰪ�� ���� �Ⱓ

int A;				//���� ������ ������ A�� B
int B;

int add()
{
	return A + B;
}

int main(void)
{
	int answer;
	A = 5;
	B = 7;

	answer = add();
	
	printf("%d + %d = %d\n", A, B, answer);

	return 0;
}