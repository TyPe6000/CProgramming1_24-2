#include <stdio.h>		//printf �Լ��� ���������� ���Ĺ��ڵ�

int main()
{
	int myAge = 12;
	printf("�� ���̴� 10������ %d��, 16������ %X���Դϴ�. \n", myAge, myAge);
	return 0;
}

// %d : ��ȣ �ִ� 10���� ���� (char, short, int)
// // %X : ��ȣ ���� 16���� ���� (unsigned int)