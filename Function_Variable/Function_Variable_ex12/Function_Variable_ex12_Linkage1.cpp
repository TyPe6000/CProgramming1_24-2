/*
연결(linkage)은 변수나 함수가 다른 파일에서 사용될 수 있는지 여부를 결정하는 것이다.
변수와 함수는 내부 연결(internal linkage)과 외부 연결(external linkage)로 나뉜다.

내부 연결을 가지는 변수나 함수는 같은 파일 내에서만 사용할 수 있고, 
외부 연결을 가지는 변수나 함수는 다른 파일에서 사용할 수 있다.

변수는 내부 연결을 가지는 경우 static 키워드를 사용하고, 
함수는 내부 연결을 가지는 경우 static 키워드를 사용하지 않는다.

p. 35 연결 예제
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