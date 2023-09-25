#include <stdio.h>

int main(void) {
	int floor;
	printf("몇 층을 쌓겠습니까? (5 ~ 100): ");  // 층수 입력 받기
	scanf_s("%d", &floor);  // 입력값 변수 floor에 저장

	// 총 floor층 만큼 출력
	for (int i = 1; i <= floor; i++) {

		// j에 i 값 대입, j가 floor-1와 작거나 같을때까지 "S"출력 반복, 실행문 실행 후 j + 1
		for (int j = i; j <= floor - 1; j++) {
			printf("S");
		}

		// i*2-1 일때까지 "*"출력 반복, 실행문 실행 후 k+1
		for (int k = 1; k <= i*2-1; k++) {
			printf("*");
		}

		// 한 층 출력 후 한 줄 개행
		printf("\n"); 
	}

	return 0;
}