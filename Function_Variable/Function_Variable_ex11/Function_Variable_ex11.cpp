/*
p. 31 Lab: �ѹ��� �ʱ�ȭ�ϱ�
	���� ������ �ѹ��� �ʱ�ȭ�ϰ� ���� ��쿡�� ���ȴ�

������
	 hw_init( ): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.
	 hw_init( ): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.
	 hw_init( ): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.

*/
#include <stdio.h>
#include <stdlib.h>

void hw_init();

int main(void)
{
	hw_init();
	hw_init();
	hw_init();

	return 0;
}

void hw_init()
{
	static int init = 0;	//���� ������ ���� ������
							//init�� ó�� ���ķ� �ʱ�ȭ���� �ʾ� ���¸� ������ �� �ִ�.
	if (init == 0)			//init�� 0�̸� �ʱ�ȭ
	{
		printf("hw_init( ): ��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.\n");
		init = 1;			//init�� 1�� �����Ͽ� �ʱ�ȭ�Ǿ����� ǥ��
	}
	else
	{
		printf("hw_init( ): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");
	}
}
