/*
p.43 const 포인터
*/
#include <stdio.h>
int main(void)
{
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;
	char* const q = s;

	//p[3] = 'a';	//p가 가리키는 곳의 값을 변경할 수 없다.

	p = t;			//p값(p가 가리키는 곳의 주소)를 변경할 수 있다.

	q[3] = 'a';		//q가 가리키는 곳의 값을 변경할 수 있다.

	//q = t;		//q값(q가 가리키는 곳의 주소)를 변경할 수 없다.

	return 0;
}
