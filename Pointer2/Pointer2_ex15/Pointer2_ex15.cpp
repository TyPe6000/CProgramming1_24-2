/*
p.61 Mini Project: �̺й����� �� ���ϱ�
*/
#include<stdio.h>
#include <math.h>

#define EPSILON 0.0001

double func(double x)   // f(x) = x^3 - x^2 + 2
{
    return x * x * x - x * x + 2;
}

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0) {   // a�� b�� ������ ������ Ȯ��
        printf("������ a�� b�� �ƴ�\n");
        return;
    }
	double c = a;                   // c�� ���� �ٻ簪
	while ((b - a) >= EPSILON)      // ���������� EPSILON���� �۾��� ������ �ݺ�
    {
		c = (a + b) / 2;			// �߰��� ���
		if (func(c) * func(a) < 0) {    // f(c)�� f(a)�� ��ȣ�� �ٸ���
			b = c;					  // b�� c�� ����
        }
        else {
			a = c;				  // �׷��� ������ a�� c�� ����
        }
    }
    printf("���� �� = %lf\n", c);
}
int main(void)
{
	double a = -200, b = 200;   // ���� [a, b] ����
    bisection(a, b);
    return 0;
}
