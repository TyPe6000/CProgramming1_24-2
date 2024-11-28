/*
p.36 함수 앞의 static

함수 앞에 static 키워드를 사용하면 해당 함수가 속한 파일 내에서만 사용할 수 있다.
함수 앞에 static 키워드를 사용하지 않으면 다른 파일에서도 사용할 수 있다.
*/

#include <stdio.h>

//extern void f1();	
extern void f2();	//다른 파일에서 사용할 수 있도록 선언

int main(void)
{
	//f1();	
	f2();	

	return 0;
}