/*
p.61 Mini Project: 이분법으로 근 구하기
*/
#include<stdio.h>
#include <math.h>

#define EPSILON 0.0001

double func(double x)   // f(x) = x^3 - x^2 + 2
{
    return x * x * x - x * x + 2;
}

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0) {   // a와 b가 적절한 값인지 확인
        printf("적절한 a와 b가 아님\n");
        return;
    }
	double c = a;                   // c는 근의 근사값
	while ((b - a) >= EPSILON)      // 오차범위가 EPSILON보다 작아질 때까지 반복
    {
		c = (a + b) / 2;			// 중간값 계산
		if (func(c) * func(a) < 0) {    // f(c)와 f(a)의 부호가 다르면
			b = c;					  // b를 c로 변경
        }
        else {
			a = c;				  // 그렇지 않으면 a를 c로 변경
        }
    }
    printf("최종 근 = %lf\n", c);
}
int main(void)
{
	double a = -200, b = 200;   // 구간 [a, b] 설정
    bisection(a, b);
    return 0;
}
