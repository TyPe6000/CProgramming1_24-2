//실습5 : 포인터 실습(5) 포인터의 증감 연산
#include <stdio.h>
int main()
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;		//char은 1byte
	pi = (int*)10000;		//int는 4byte
	pd = (double*)10000;	//double은 8byte

	printf(" pc=%u,  pc+1=%u,  pc+2= %u\n", pc, pc + 1, pc + 2);
	printf(" pi=%u,  pi+1=%u,  pi+2= %u\n", pi, pi + 1, pi + 2);
	printf(" pd=%u,  pd+1=%u,  pd+2= %u\n", pd, pd + 1, pd + 2);

	return 0;
}