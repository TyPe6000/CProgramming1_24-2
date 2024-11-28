/*
p. 39 Lab: 난수 발생기

자체적인 난수 발생기 작성
이전에 만들어졌던 난수를 이용하여 새로운 난수를 생성함을 알 수 있다.
따라서 함수 호출이 종료되더라도 이전에 만들어졌던 난수를 어딘가에 저장하고 있어야 한다

다음과 같은 함수를 작성
	0에서 M-1 사이의 난수를 생성하는 random_i()
	0.0에서 1.0 사이의 난수를 생성하는 random_f()
0부터 100사이의 난수를 몇 개 생성해보자.
*/

#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);

extern int MOD;

int main(void)
{
	int i;				//난수 생성 횟수

	MOD = 100;		//난수 생성을 위한 상수

	for (i = 0; i < 10; i++)
	{
		printf("%d ", random_i());	//0에서 MOD-1 사이의 난수 출력
	}

	return 0;
}