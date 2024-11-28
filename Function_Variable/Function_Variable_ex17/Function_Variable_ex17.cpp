/*
순환(recursion)

함수는 자기 자신을 호출할 수도 있다. 이것을 순환(recursion)라고 부른다.

p. 49 팩토리얼 계산

*/

#include <stdio.h>

long factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	int x = 0;
	long f;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);
	printf(" %d!은 %d입니다. \n", x, factorial(x));

	return 0;
}
