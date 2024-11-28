#include <stdio.h>			//p.24 저장 유형 지정자 static
/*
int main(void)				//저장 유형 지정자 auto
{
	auto int sum = 0;		//auto 키워드를 사용한 지역 변수 선언
							//auto 키워드는 생략 가능
							//auto int sum;와 같이 사용해도 됨
	int i = 0;
	register int i;			//저장 유형 지정자 register
							//레지스터에 변수를 저장
	...
}
*/

void sub()
{
	static int scount = 0;	//정적 지역변수로서 static
							//지역 변수가 정적 변수로
	int acount = 0;
	printf("scount = %d\n", scount);

	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main(void)
{
	sub();
	sub();
	sub();
	return 0;
}