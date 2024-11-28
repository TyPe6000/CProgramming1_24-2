#define SEED 17
int MULT = 25173;	//난수 생성을 위한 상수
int INC = 13849;	//난수 생성을 위한 상수
int MOD = 65536;	//난수 생성을 위한 상수

static unsigned int seed = SEED;		//난수 생성 시드값

//정수 난수 생성 함수
unsigned random_i(void)
{
	seed = (MULT * seed + INC) % MOD;	//난수의 시드값 설정
	return seed;
}

//실수 난수 생성 함수
double random_f(void)
{
	seed = (MULT * seed + INC) % MOD;	//난수의 시드값 설정
	return seed / (double)MOD;			//난수의 범위 설정, 0.0에서 1.0 사이의 난수 생성
}
