/*
p. 52 최대 공약수 구하기

최대 공약수를 구하는 방법으로 유클리드의 호제법이라는 방법이 있다.
이 방법은 두 수 x와 y의 최대 공약수는 y와 (x % y)의 최대 공약수와 같으며
 x와 0의 최대 공약수는 x라는 것이다

*/

//최대 공약수를 구하는 함수
#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
	printf("x = 30, y = 20일 때, x와 y의 최대공약수\n");
	printf("%d\n", gcd(30, 20));
	int x, y;
	printf("x =");
	scanf_s("%d", &x);
	printf("y =");
	scanf_s("%d", &y);
	printf("x와 y의 최대공약수\n");
	printf("%d\n", gcd(x, y));
}

//x는 y보다 커야 한다.
int gcd(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return gcd(y, x % y);
	}
}