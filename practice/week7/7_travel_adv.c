#include <stdio.h>

// 상수 선언
#define NUMCITY 3
#define NUMPEOPLE 2

// 배열 선언
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

// 함수 선언
void calculateTravelDays();
int getSum(int numArray[], int length);
double getAverage(int numArray[], int length);
void printFamousCity(double dayArray[], int length);

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

	// 2차원 배열 선언(행: NUMCITY, 열: NUMPEOPLE, 3x2)
	int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력 받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);  // 각 도시별 각 사람이 보낸 일 수 저장
		}
	}

	// 평균 일수 저장할 배열 선언(NUMCITY만큼의 크기)
	double averageDays[NUMCITY];

	// 각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = getSum(travelDays[i], NUMPEOPLE);          // getSum 함수 호출, travelDays의 i번째 행 전달
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);  // getAverage함수 호출, travelDays의 i번째 행 전달
		printf("도시 %s에서 보낸 총 일 수 : %d, 평균 일 수 : %.2f\n", cities[i], totalDays, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}

// 총 일수 구하는 함수 정의
int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {  
		totalDays += numArray[i];  // 주어진 배열의 각 값을 i<length까지 더하기
	}
	return totalDays;              // 호출문에 totalDays 반환
}

// 평균 일 수 더하는 함수 정의
double getAverage(int numArray[],int length) {
	int totalDays = getSum(numArray, length);        // getSum 함수 호출, 총 일수 구하기
	double averageDay = (double)totalDays / length;  // int형인 totalDays 값을 double로 바꾸어 평균 계산
	return averageDay;  // 평균 값 반환
}

// 가장 인기있는 도시 출력 함수 정의
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {    // dayArray[i] > maxDay이면 maxDayIndex에 i값 저장 후 i+1, 아니면 그냥 i+1, i < length 까지
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}

	printf("평균일 기준으로 가장 인기있었던 도시는 %s입니다. (평균 머문일: %.2f)\n", cities[maxDayIndex], maxDay);  // 가장 인기있었던 도시 출력
}