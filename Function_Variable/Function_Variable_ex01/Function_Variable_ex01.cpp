#include <stdio.h>			// 함수와 변수, p. 10 예제 01

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		int temp = 1;		//temp는 for 블록이 시작할 때 마다 생성되어 초기화
		printf("temp = %d\n", temp);
		temp++;
	}

	return 0;
}