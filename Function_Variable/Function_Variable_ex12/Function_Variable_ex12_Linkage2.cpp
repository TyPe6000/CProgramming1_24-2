extern int all_files;			//�ܺ� ������ ������ ���� ����

//extern int this_file;
								//�񱳸� ���� this_file�ε� ����
								//this_file�� linkage1���� static���� ����	
void sub()
{
	all_files = 10;
	//this_file = 20;
}