/*
p.60 �߰� ����
������ ���� ������ ����ü 2���� ���ϴ� �Լ��� �ۼ��Ͽ� ����.
*/
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int age, grade;
    char name[20];
};

int comparator(const void* p, const void* q)
{
    int l = ((struct Student*)p)->grade;
	int r = ((struct Student*)q)->grade;
    return (l - r);
}

int main()
{
	int i;
	struct Student arr[] = { {20, 90, "Kim"}, {25, 80, "Lee"}, {22, 70, "Park"} };
	qsort(arr, 3, sizeof(struct Student), comparator);
	for (i = 0; i < 3; i++)
		printf("%d %d %s\n", arr[i].age, arr[i].grade, arr[i].name);
	return 0;
}