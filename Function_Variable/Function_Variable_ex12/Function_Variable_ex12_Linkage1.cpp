/*
����(linkage)�� ������ �Լ��� �ٸ� ���Ͽ��� ���� �� �ִ��� ���θ� �����ϴ� ���̴�.
������ �Լ��� ���� ����(internal linkage)�� �ܺ� ����(external linkage)�� ������.

���� ������ ������ ������ �Լ��� ���� ���� �������� ����� �� �ְ�, 
�ܺ� ������ ������ ������ �Լ��� �ٸ� ���Ͽ��� ����� �� �ִ�.

������ ���� ������ ������ ��� static Ű���带 ����ϰ�, 
�Լ��� ���� ������ ������ ��� static Ű���带 ������� �ʴ´�.

p. 35 ���� ����
*/

#include <stdio.h>

int all_files;
static int this_file;
extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);

	return 0;
}