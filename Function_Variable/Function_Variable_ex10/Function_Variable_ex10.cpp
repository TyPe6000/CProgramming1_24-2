#include <stdio.h>			//p.28 Lab: 은행 계좌 구현하기

//amount가 0보다 크면 입금, 0보다 작으면 출금
void save(int amount)
{
	static long balance = 0;

	if(amount >=0)
		printf("%d \t\t", amount);
	else
		printf("\t%d \t", amount);

	balance += amount;
	printf("%d \n", balance);
}

int main(void)
{
	printf("==============================\n");
	printf("입금 \t출금 \t잔액 \n");
	printf("==============================\n");

	save(10000);
	save(50000);
	save(-10000);
	save(30000);

	printf("==============================\n");

	return 0;
}