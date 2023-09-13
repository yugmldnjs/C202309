#include <stdio.h>

int main()
{
	int x = 4;  // x에 4 대입
	int y = 2;  // y에 2 대입
	int z;

	z = (x + y) * (x - y);
	printf("z =(x+y) * (x-y) = %d\n", z);  // 정수 z값 출력

	z = (x * y) + (x / y);
	printf("z = (x * y) + (x / y) = %d\n", z);  // 정수 z값 출력

	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);  // 정수 z값 출력

	return 0;
}