extern int all_files;			//외부 연결을 가지는 변수 선언

//extern int this_file;
								//비교를 위해 this_file로도 실험
								//this_file은 linkage1에서 static으로 선언	
void sub()
{
	all_files = 10;
	//this_file = 20;
}