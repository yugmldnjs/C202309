#include <stdio.h>

long multiF(long value);  // 함수 선언


// 1부터 n까지의 곱 출력, multiF 함수 호출하여 계산
int main(void) {
	printf("1부터 2까지의 곱은 %d\n", multiF(2));
	printf("1부터 3까지의 곱은 %d\n", multiF(3));
	printf("1부터 5까지의 곱은 %d\n", multiF(5));
}


// 함수 정의
long multiF(long value) {
	long i;
	long multi = 1;


	// i <= value까지 실행문 반복, 한번 실행시 마다 i+1
	for (i = 1; i <= value; i++) {
		multi = multi * i;
	}

	return multi;  // 호출문에 multi 반환
}