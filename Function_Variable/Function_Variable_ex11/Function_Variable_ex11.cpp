/*
p. 31 Lab: 한번만 초기화하기
	정적 변수는 한번만 초기화하고 싶은 경우에도 사용된다

예상결과
	 hw_init( ): 네트워크 장치를 초기화합니다.
	 hw_init( ): 이미 초기화되었으므로 초기화하지 않습니다.
	 hw_init( ): 이미 초기화되었으므로 초기화하지 않습니다.

*/
#include <stdio.h>
#include <stdlib.h>

void hw_init();

int main(void)
{
	hw_init();
	hw_init();
	hw_init();

	return 0;
}

void hw_init()
{
	static int init = 0;	//지역 변수가 정적 변수로
							//init은 처음 이후로 초기화되지 않아 상태를 저장할 수 있다.
	if (init == 0)			//init이 0이면 초기화
	{
		printf("hw_init( ): 네트워크 장치를 초기화합니다.\n");
		init = 1;			//init을 1로 설정하여 초기화되었음을 표시
	}
	else
	{
		printf("hw_init( ): 이미 초기화되었으므로 초기화하지 않습니다.\n");
	}
}
