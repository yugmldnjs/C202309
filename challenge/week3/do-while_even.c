#include <stdio.h>

int main(void) {
	int i = 0;
	do {
		// i�� ¦���� i + 1
		if (i % 2 == 0) {
			i++;
		}
		printf("%d Hello World\n", i++);  // "Hello World" ��� �� i + 1
	} while (i < 10);  // i�� 10�� �Ǹ� �ݺ��� ����
	return 0;
}