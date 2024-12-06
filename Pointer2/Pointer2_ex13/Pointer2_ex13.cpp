/*
p.54 Lab: 프로그램 인수 사용하기
사용자로부터 마일(mile)로 된 거리를 받아서 킬로미터(km)로 변환해주는 프로그램을 작성해보자.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])	// main() 함수의 인수 argc와 argv
{
	double mile, km;

	if (argc != 2) {	// 인수가 2개가 아니면
		printf("사용 방법: mile2km 거리\n");	// 사용 방법 출력
		return 1;	// 프로그램 종료
	}
	mile = atof(argv[1]);	// 문자열을 실수로 변환
	km = 1.609 * mile;	// 마일을 킬로미터로 변환
	printf("입력된 거리는 %f km입니다. \n", km);	// 결과 출력

	return 0;
}
