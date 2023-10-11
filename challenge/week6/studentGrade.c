#include <stdio.h>
#define STUDENTS 5  // 상수 STUDENTS 선언

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");
	char grade = ' ';  //문자열 변수 선언

	/* 점수에 따른 성적 구분 및 알고자하는 학생의 성적 출력,
	 i < STUDENTS일때까지 실행, i 사용 후 + 1*/
	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] >= 90) {  // 
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[], int sum) {
	/*int sum = 0;*/

	// 모든 점수의 합 계산 및 출력, i < STUDENTS 까지 실행
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	printf("학생들 점수의 총 합은 %d이다", sum);
	return sum;
}

double averageScores(int scores[], double average, int sum) {
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;
	printf("%lf", average);
}

void printRanks(int scores[]) {
	
}

int main() {
	int scores[STUDENTS];  // 배열 선언


	// i < STUDENTS일때까지 성적 입력받기 반복
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();  // 버퍼 임시 저장 변수, 엔터 지우기 위해

	char target;

	// 점수 입력받고 terget에 저장
	printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);
	
	printRanks(scores);
	return 0;
}