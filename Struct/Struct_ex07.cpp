#include <stdio.h>		//실습7: 열거형(enumeration)

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

const char* days_name[] = {		//const char
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

int main(void)
{
	enum days d;
	d = WED;
	printf("%d번째 요일은 %s입니다\n", d, days_name[d]);

	return 0;
}