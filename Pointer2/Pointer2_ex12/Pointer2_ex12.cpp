/*
p.50 main() �Լ��� �μ�
*/
#include <stdio.h>

int main(int argc, char* argv[])	// main() �Լ��� �μ� argc�� argv
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("��ɾ� ���ο��� %d��° ���ڿ� = %s\n", i, argv[i]);	// ��ɾ� ���ο��� ���޵� ���ڿ� ���

	return 0;
}

/*
c:\cprogram\mainarg\Debug>mainarg src dst
��ɾ� ���ο��� 0��° ���ڿ� = mainarg
��ɾ� ���ο��� 1��° ���ڿ� = src
��ɾ� ���ο��� 2��° ���ڿ� = dst
c:\cprogram\mainarg\Debug>
*/