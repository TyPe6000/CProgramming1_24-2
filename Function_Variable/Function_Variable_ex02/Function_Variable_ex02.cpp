#include <stdio.h>			//p.11 지역변수의 초기값

int main(void)
{
	int temp;
	
	printf("temp = %d\n", temp);	//temp는 초기화되지 않았으므로 쓰레기 값이 출력됨
	
	return 0;
}