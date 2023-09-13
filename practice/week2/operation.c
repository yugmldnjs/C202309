#include <stdio.h>

int main()
{
	int x = 4;  //x에 4 대입
	int y = 2;  //y에 2 대입
	int z;

	z = x + y;  //변수 z에 x,y의 합을 저장
	printf("z = x + y = %d\n", z);  //정수 z값 출력
	z = x - y;  //변수 z에 x,y의 차를 저장
	printf("z = x - y = %d\n", z);  //정수 z값 출력
	z = x * y;  //변수 z에 x,y의 곱을 저장
	printf("z = x * y = %d\n", z);  //정수 z값 출력
	z = x / y;  //변수 z에 x,y의 몫을 저장
	printf("z = x / y = %d\n", z);  //정수 z값 출력

	return 0;
}