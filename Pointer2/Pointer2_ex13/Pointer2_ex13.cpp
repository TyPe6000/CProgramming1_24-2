/*
p.54 Lab: ���α׷� �μ� ����ϱ�
����ڷκ��� ����(mile)�� �� �Ÿ��� �޾Ƽ� ų�ι���(km)�� ��ȯ���ִ� ���α׷��� �ۼ��غ���.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])	// main() �Լ��� �μ� argc�� argv
{
	double mile, km;

	if (argc != 2) {	// �μ��� 2���� �ƴϸ�
		printf("��� ���: mile2km �Ÿ�\n");	// ��� ��� ���
		return 1;	// ���α׷� ����
	}
	mile = atof(argv[1]);	// ���ڿ��� �Ǽ��� ��ȯ
	km = 1.609 * mile;	// ������ ų�ι��ͷ� ��ȯ
	printf("�Էµ� �Ÿ��� %f km�Դϴ�. \n", km);	// ��� ���

	return 0;
}
