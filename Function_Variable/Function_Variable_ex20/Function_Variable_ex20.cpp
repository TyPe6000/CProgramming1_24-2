/*
p. 54 Mini Project: 하노이 탑 문제

문제는 막대 A에 쌓여있는 원판 3개를 막대 C로 옮기는 것이다. 단 다음의 조건을 지켜야 한다.
	한 번에 하나의 원판만 이동할 수 있다
	맨 위에 있는 원판만 이동할 수 있다
	크기가 작은 원판 위에 큰 원판이 쌓일 수 없다.
	중간의 막대를 임시적으로 이용할 수 있으나 앞의 조건들을 지켜야 한다.
*/

/*
알고리즘
// 막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 막대 to로 옮긴다.// 막대 from에 쌓여있는 n개의 원판을 막대 tmp를 사용하여 막대 to로 옮긴다.
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		from에서 to로 원판을 옮긴다.
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		from에 있는 하나의 원판을 to로 옮긴다.
		hanoi_tower(n - 1, tmp, from, to);
	}
}
*/

#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
	hanoi_tower(4, 'A', 'B', 'C');
	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("%c에서 %c로 원판 1을 옮긴다.\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("%c에서 %c로 원판 %d을 옮긴다.\n", from, to, n);
		hanoi_tower(n - 1, tmp, from, to);
	}
}