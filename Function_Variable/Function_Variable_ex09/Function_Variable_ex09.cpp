						//p.26 volatile
						//변수 앞에 volatile을 붙이면 컴파일러가 최적화를 하지 않도록 함
volatile int io_port;

void wait(void) {
	io_port = 0;
	while (io_port != 255)
		;
}
//...