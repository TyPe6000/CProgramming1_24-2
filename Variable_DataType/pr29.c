#include <stdio.h>		//printf �Լ��� ���������� ���Ĺ��ڵ�

int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);	//%o : 8���� unsigned int
	printf("%x %#x \n", num2, num2);	//%x : 16���� unsigned int(�ҹ���)
	return 0;
}