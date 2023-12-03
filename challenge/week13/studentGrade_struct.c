#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 학생의 이름과 점수를 저장하는 구조체
typedef struct Student {
  char *name;  // 학생 이름 저장 변수
  int score;   // 학생 성적 저장 변수
} STUDENT;

// 함수 선언
void InitializeStudent(STUDENT *student_info);
void ClassifyStudents(STUDENT *student_info, char targetGrade, int student_num);
int SumScores(STUDENT *student_info, int student_num);
double AverageScores(STUDENT *student_info, int student_num);
void PrintRanks(STUDENT *student_info, int student_num);

int main() {
  // 학생 수 입력 받기
  int student_num;  // 학생수 저장 변수
  printf("학생 수를 입력하세요: ");
  scanf_s("%d", &student_num);

  // 학생의 정보를 저장하는 구조체의 크기 동적할당
  STUDENT *student_info = (STUDENT *)malloc(student_num * sizeof(STUDENT));

  // 학생의 정보 입력받기
  for (int i = 0; i < student_num; i++) {
    printf("학생 %d의 정보를 입력하세요.\n", i + 1);
    InitializeStudent(&student_info[i]);
  }

  char ch = getchar();  // 버퍼 임시 저장 변수

  char target;

  // 점수 입력받고 terget에 저장
  printf("특정 점수 (A, B, C, D, F)를 입력하시오:");
  scanf_s("%c", &target, 1);

  // 함수 호출
  ClassifyStudents(student_info, target, student_num);

  int sum = SumScores(student_info, student_num);
  double average = AverageScores(student_info, student_num);
  printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

  PrintRanks(student_info, student_num);
  return 0;
}

// 학생별 정보를 입력받아 구조체에 입력받은 값을 저장하는 함수
void InitializeStudent(STUDENT *student_info) {
  // 이름 입력받기: temp변수에 임시저장하여 동적할당 후 구조체에 저장
  printf("이름: ");
  char temp[100];
  scanf_s("%s", temp, (int)sizeof(temp));
  student_info->name = (char *)malloc((strlen(temp) + 1) * sizeof(char));
  strcpy_s(student_info->name, strlen(temp) + 1, temp);

  // 성적 입력받기
  printf("성적: ");
  scanf_s("%d", &student_info->score);
}

// 성적 분류하는 함수
void ClassifyStudents(STUDENT *student_info, char targetGrade,
                      int student_num) {
  printf("학생 성적 분류:\n");
  char grade = ' ';  // 문자열 변수 선언

  /* 점수에 따른 성적 구분 및 알고자하는 학생의 성적 출력,
   i < STUDENTS일때까지 실행, i 사용 후 + 1*/
  for (int i = 0; i < student_num; i++) {
    if (student_info[i].score >= 90) {  //
      grade = 'A';
    } else if (student_info[i].score >= 80) {
      grade = 'B';
    } else if (student_info[i].score >= 70) {
      grade = 'C';
    } else if (student_info[i].score >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }

    if (targetGrade == grade) {
      printf("%s 학생은 %c 점수를 받았습니다.\n", student_info[i].name, targetGrade);
    }
  }
}

// 모든 성적의 합을 구하는 함수 정의
int SumScores(STUDENT *student_info, int student_num) {
  int sum = 0;
  for (int i = 0; i < student_num; i++) {
    sum += student_info[i].score;
  }
  return sum;
}

// 성적의 평균을 구하는 함수 정의
double AverageScores(STUDENT *student_info, int student_num) {
  int sum = 0;
  double average = 0;
  for (int i = 0; i < student_num; i++) {
    sum += student_info[i].score;
  }
  average = (double)sum / student_num;
  return average;
}

// 학생들의 순위를 출력하는 함수 정의
void PrintRanks(STUDENT *student_info, int student_num) {
  for (int i = 0; i < student_num; i++) {
    int ranks = 1;  // 초기 순위: 1
    for (int j = 0; j < student_num; j++) {
      // scores[i] < scores[j] 일 경우 ranks + 1
      if (student_info[i].score < student_info[j].score) {
        ranks += 1;
      }
    }
    printf("%d 학생의 순위는 %d 입니다.\n", i + 1, ranks);
  }
}