#include <stdio.h>

int main()
{
	int x = 1;

	printf("x=%d\n", x++ );  // 1 ��� �� +1 -> x = 2�� ����
	printf("x=%d\n", x++ );  // 2 ��� �� +1 -> x = 3���� ����
	printf("x=%d\n", ++x );  // 3�� +1 �� �� 4 ��� -> x = 4�� ����
	printf("x=%d\n", x-- );  // 4 ��� �� -1 -> x = 3���� ����
	printf("x=%d\n", x-- );  // 3 ��� �� -1 -> x = 2�� ����
	printf("x=%d\n", --x );  // 2�� -1 �� �� 1 ��� -> x = 1�� ����

	return 0;
}