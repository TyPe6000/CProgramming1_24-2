/*
p. 44 ���� �Ű� ����

���� �Ű� ������ �Լ��� ���޵Ǵ� �μ��� ������ �������� ���� ��쿡 ���ȴ�.
���� �Ű� ������ ����Ϸ��� stdarg.h ��� ������ �����ؾ� �Ѵ�.

*/

#include <stdio.h>
#include <stdarg.h>	//���� �Ű� ������ ����ϱ� ���� ����

int sum(int, ...);	//���� �Ű� ������ ����ϴ� �Լ� ����

int main(void)
{
	int answer = sum(4, 4, 3, 2, 1);	//5���� �μ��� ����
	printf("answer = %d\n", answer);
	return 0;
}

int sum(int num, ...)
{
	int answer = 0;			//�հ踦 ������ ����
	va_list argptr;			//���� �Ű� ���� ����� ������ ����
	va_start(argptr, num);	//���� �Ű� ���� ����� �ʱ�ȭ

	for (; num > 0; num--)	//num�� 0���� Ŭ ������ �ݺ�
	{
		answer += va_arg(argptr, int);	//���� �Ű� ���� ��Ͽ��� ������ ������ answer�� ����
	}
	va_end(argptr);			//���� �Ű� ���� ����� ����
	return answer;			//�հ� ��ȯ
}