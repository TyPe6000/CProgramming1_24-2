/*
p.50 main() 함수의 인수
*/
#include <stdio.h>

int main(int argc, char* argv[])	// main() 함수의 인수 argc와 argv
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("명령어 라인에서 %d번째 문자열 = %s\n", i, argv[i]);	// 명령어 라인에서 전달된 문자열 출력

	return 0;
}

/*
c:\cprogram\mainarg\Debug>mainarg src dst
명령어 라인에서 0번째 문자열 = mainarg
명령어 라인에서 1번째 문자열 = src
명령어 라인에서 2번째 문자열 = dst
c:\cprogram\mainarg\Debug>
*/