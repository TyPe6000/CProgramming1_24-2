/*
p.13 ���ڿ� �迭
*/
#include <stdio.h>

int main(void)
{
	int i, n;
	const char* fruits[] = {	// ���ڿ� ������ �迭 ����
		"apple",
		"blueberry",
		"orange",
		"melon"
	};

	n = sizeof(fruits) / sizeof(fruits[0]);	// �迭 ���� ���� ���

	for (i = 0; i < n; i++)
		printf("%s \n", fruits[i]);

	return 0;
}