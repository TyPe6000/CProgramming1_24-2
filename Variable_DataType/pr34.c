#include <stdio.h>		//do ~ while 문

int main(void)
{
	int total = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;			//일단 1회 실행하고
	} while (num != 0);			//조건 확인
	printf("합계: %d \n", total);
	return 0;
}
