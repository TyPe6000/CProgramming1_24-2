/*
p.57 Lab: qsort()함수 사용하기
qsort()는 데이터가 저장괸 배열을 정렬하는 라이브러리 함수이다.
*/
#include <stdio.h>
#include <stdlib.h>

int values[] = { 98, 23, 99, 37, 16 };

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);   // 오름차순 정렬
}

int main()
{
    int n;

	qsort(values, 5, sizeof(int), compare); // qsort() 함수 호출

    printf("정렬한 후 배열: ");
    for (n = 0; n < 5; n++)
		printf("%d ", values[n]);   // 정렬한 후 배열 출력
    printf("\n");

    return(0);
}
