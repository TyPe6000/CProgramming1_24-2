#include <stdio.h>		//while�� ��ø

int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) {
		is = 1;
		while (is < 10) {
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}