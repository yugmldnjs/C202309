#include <stdio.h>

int main(void) {
	int num = 0;

	//숫자 입력 받기
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	// num이 0일 때 "zero" 출력
	if (num == 0) {
		printf("zero");
	}

	// num이 1일 때 "one" 출력
	else if (num == 1) {
		printf("one");
	}

	// num이 2일 때 "two" 출력
	else if (num == 2) {
		printf("two");
	}

	// 0~2의 값이 아닐 때 실행
	else {
		printf("not 0 ~ 2");
	}

	return 0;
}