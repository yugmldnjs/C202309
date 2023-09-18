#include <stdio.h>

int main(void) {
	int i = 0;
	do {
		// i가 짝수면 i + 1
		if (i % 2 == 0) {
			i++;
		}
		printf("%d Hello World\n", i++);  // "Hello World" 출력 후 i + 1
	} while (i < 10);  // i가 10이 되면 반복문 종료
	return 0;
}