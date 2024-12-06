/*
p.5 이중 포인터
*/

#include <stdio.h>

int main(void)
{
    int i = 100;
    int* p = &i;
	int** q = &p;   // 이중 포인터

    *p = 200;
    printf("i=%d\n", i);

    **q = 300;
    printf("i=%d\n", i);

    return 0;
}
