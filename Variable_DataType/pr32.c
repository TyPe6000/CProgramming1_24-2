#include <stdio.h>		//반복문의 이해와 while문

int main(void)
{
	int num = 0;

	while (num < 5) {
		printf("Hello world! %d \n", num);
		num++;
	}
	return 0;
}