#include <stdio.h>

static void f1()	//다른 파일에서 사용할 수 없도록 선언
{
	printf("f1()\n");
}

void f2()	//다른 파일에서 사용할 수 있도록 선언
{
	printf("f2()\n");
}