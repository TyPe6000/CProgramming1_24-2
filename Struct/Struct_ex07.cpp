#include <stdio.h>		//�ǽ�7: ������(enumeration)

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };

const char* days_name[] = {		//const char
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

int main(void)
{
	enum days d;
	d = WED;
	printf("%d��° ������ %s�Դϴ�\n", d, days_name[d]);

	return 0;
}