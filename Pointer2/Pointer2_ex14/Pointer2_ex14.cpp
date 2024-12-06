/*
p.57 Lab: qsort()�Լ� ����ϱ�
qsort()�� �����Ͱ� ���屭 �迭�� �����ϴ� ���̺귯�� �Լ��̴�.
*/
#include <stdio.h>
#include <stdlib.h>

int values[] = { 98, 23, 99, 37, 16 };

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);   // �������� ����
}

int main()
{
    int n;

	qsort(values, 5, sizeof(int), compare); // qsort() �Լ� ȣ��

    printf("������ �� �迭: ");
    for (n = 0; n < 5; n++)
		printf("%d ", values[n]);   // ������ �� �迭 ���
    printf("\n");

    return(0);
}
