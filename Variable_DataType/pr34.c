#include <stdio.h>		//do ~ while ��

int main(void)
{
	int total = 0, num = 0;
	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;			//�ϴ� 1ȸ �����ϰ�
	} while (num != 0);			//���� Ȯ��
	printf("�հ�: %d \n", total);
	return 0;
}
