#include <stdio.h>

int main()
{
	int x = 1;

	printf("x=%d\n", x++ );  // 1 출력 후 +1 -> x = 2로 저장
	printf("x=%d\n", x++ );  // 2 출력 후 +1 -> x = 3으로 저장
	printf("x=%d\n", ++x );  // 3에 +1 한 후 4 출력 -> x = 4로 저장
	printf("x=%d\n", x-- );  // 4 출력 후 -1 -> x = 3으로 저장
	printf("x=%d\n", x-- );  // 3 출력 후 -1 -> x = 2로 저장
	printf("x=%d\n", --x );  // 2에 -1 한 후 1 출력 -> x = 1로 저장

	return 0;
}