						//p.26 volatile
						//���� �տ� volatile�� ���̸� �����Ϸ��� ����ȭ�� ���� �ʵ��� ��
volatile int io_port;

void wait(void) {
	io_port = 0;
	while (io_port != 255)
		;
}
//...