#include <stdio.h>

int main(void) {
	int i = 1;
	// i�� 10�� �Ǹ� �ݺ��� ����
	while (i < 10) {
		// i�� ¦���� i + 1
		if (i % 2 == 0) {  
			i++;
		}
		printf("%d Hello World\n", i++);  // "Hello World" ��� �� i +1
	}
	return 0;
}