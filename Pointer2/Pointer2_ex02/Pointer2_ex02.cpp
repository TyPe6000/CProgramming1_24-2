/*
p.6 ���� ������ ���� #2
*/

#include <stdio.h>

void set_pointer(const char** q);

int main(void)
{
	const char* p;      // ������ ���� p ����
	set_pointer(&p);    // ������ ���� p�� �ּҸ� ����

    printf("������ �ݾ�: %s \n", p);
    return 0;
}

void set_pointer(const char** q)
{
	*q = "All that glisters is not gold.";	// ������ ���� q�� ����Ű�� �ּҿ� ���ڿ��� ����
}
