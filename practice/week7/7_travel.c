#include <stdio.h>

// 상수 선언
#define NUMCITY 3
#define NUMPEOPLE 2

// 배열 선언
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

// 함수 선언
void calculateTravelDays();

int main() {


	// 사용자로부터 도시 이름 받기
	printf("%d개의 도시명을 차례대로 입력해주세요. \n", NUMCITY);

	// i < NUMCITY 일 때까지 도시명 저장
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}


	//사용자로부터 사람 이름 받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요. \n", NUMPEOPLE);
	
	// i < NUMPEOPLE 일 때까지 여행자명 저장
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// 함수 호출
	calculateTravelDays();

	return 0;
}

// 함수 정의
void calculateTravelDays() {

	// 2차원 배열 선언(행: NUMCITY, 열: NUMPEOPLE)
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력 받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);  // 2차원 배열에 각 도시별 개별 체류일 저장
		}
	}



	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일 수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDays);
	
	}

}
