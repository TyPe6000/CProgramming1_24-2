/*
p.40 �����͸� �̿��� �迭 ���� �湮
*/
#include <stdio.h>

#define ROWS 4
#define COLS 3

// ���� ��հ��� ����ϴ� �Լ�
double get_row_avg(int m[][COLS], int r)
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[r][0];
	endp = &m[r][COLS];

	while (p < endp)
		sum += *p++;

	sum /= COLS;
	return sum;
}

// ��ü ��հ��� ����ϴ� �Լ�
double get_total_avg(int m[][COLS])
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];
	endp = &m[ROWS - 1][COLS];

	while (p < endp)
		sum += *p++;

	sum /= ROWS * COLS;
	return sum;
}

int main(void)
{
	int m[ROWS][COLS] = {
		{ 10, 20, 30 },
		{ 40, 50, 60 },
		{ 70, 80, 90 },
		{ 100, 110, 120 }
	};
	int i, j;
	for (i = 0; i < ROWS; i++)
		printf("%d���� ��հ� = %f\n", i, get_row_avg(m, i));
	printf("��ü ��հ� = %f\n", get_total_avg(m));
	return 0;
}