#include <stdio.h>		//�ǽ�5: ����ü
						//����ü�� ���� �޸� ������ ���� ������ ������
union example {			//����� ��뿡���� ����ü�� ����
	int i;
	char c;
};

int main()
{
	union example v;

	v.c = 'A';
	printf("v.c:%c   v.i:%i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c:%c   v.i:%i\n", v.c, v.i);

}

