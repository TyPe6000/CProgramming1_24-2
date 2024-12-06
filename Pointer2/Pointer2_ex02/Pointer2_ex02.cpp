/*
p.6 이중 포인터 예제 #2
*/

#include <stdio.h>

void set_pointer(const char** q);

int main(void)
{
	const char* p;      // 포인터 변수 p 선언
	set_pointer(&p);    // 포인터 변수 p의 주소를 전달

    printf("오늘의 격언: %s \n", p);
    return 0;
}

void set_pointer(const char** q)
{
	*q = "All that glisters is not gold.";	// 포인터 변수 q가 가리키는 주소에 문자열을 저장
}
