#include <stdio.h>

int main()
{
	int x = +4;  // x�� +4 ����
	int y = -2;  // y�� -2 ����

	printf("x + (-y) = %d\n", x + (-y));  // x + (-y)�� ����� ���
	printf("-x + (+y) = %d\n", -x + (+y));  // -x + (+y)�� ����� ���

	return 0;
}