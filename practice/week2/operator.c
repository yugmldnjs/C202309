#include <stdio.h>

int main()
{
	int x = +4;  // x에 +4 대입
	int y = -2;  // y에 -2 대입

	printf("x + (-y) = %d\n", x + (-y));  // x + (-y)의 결과값 출력
	printf("-x + (+y) = %d\n", -x + (+y));  // -x + (+y)의 결과값 출력

	return 0;
}