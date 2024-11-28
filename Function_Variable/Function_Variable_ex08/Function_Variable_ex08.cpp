#include <stdio.h>			//p.24 ���� ���� ������ static
/*
int main(void)				//���� ���� ������ auto
{
	auto int sum = 0;		//auto Ű���带 ����� ���� ���� ����
							//auto Ű����� ���� ����
							//auto int sum;�� ���� ����ص� ��
	int i = 0;
	register int i;			//���� ���� ������ register
							//�������Ϳ� ������ ����
	...
}
*/

void sub()
{
	static int scount = 0;	//���� ���������μ� static
							//���� ������ ���� ������
	int acount = 0;
	printf("scount = %d\n", scount);

	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main(void)
{
	sub();
	sub();
	sub();
	return 0;
}