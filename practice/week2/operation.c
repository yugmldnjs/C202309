#include <stdio.h>

int main()
{
	int x = 4;  //x에 4 대입
	int y = 2;  //y에 2 대입
	int z;

	z = x + y;
	printf("z = x + y = %d\n", z); 
	z = x - y;
	printf("z = x - y = %d\n", z);
	z = x * y;
	printf("z = x * y = %d\n", z);
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}