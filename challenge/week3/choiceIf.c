#include <stdio.h>

int main(void) {
	int choice;
	// 선택지 1,2,3 출력 및 숫자 입력 받기
	printf("1. 파일저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice);

	// 1을 입력 받았을 경우 실행문 출력
	if (choice == 1) {
		printf("파일을 저장합니다.");
	}
	// 2을 입력 받았을 경우 실행문 출력
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}
	// 3을 입력 받았을 경우 실행문 출력
	else if (choice == 3) {
		printf("종료합니다.");
	}
	// 1, 2, 3 외의 값을 입력 받았을 경우
	else {
		printf("잘못 입력하셨습니다.");
	}

	return 0;
}