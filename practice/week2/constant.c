#include <stdio.h>

// define으로 상수 정의
#define X 1
#define PI 3.141592

int main()
{
	double z;

	z = X + PI;  // 변수 z에 상수 값의 합을 저장

	printf("%f", z);  // 실수 z값 출력

	return 0;
}