#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �л��� �̸��� ������ �����ϴ� ����ü
typedef struct Student {
  char *name;  // �л� �̸� ���� ����
  int score;   // �л� ���� ���� ����
} STUDENT;

// �Լ� ����
void InitializeStudent(STUDENT *student_info);
void ClassifyStudents(STUDENT *student_info, char targetGrade, int student_num);
int SumScores(STUDENT *student_info, int student_num);
double AverageScores(STUDENT *student_info, int student_num);
void PrintRanks(STUDENT *student_info, int student_num);

int main() {
  // �л� �� �Է� �ޱ�
  int student_num;  // �л��� ���� ����
  printf("�л� ���� �Է��ϼ���: ");
  scanf_s("%d", &student_num);

  // �л��� ������ �����ϴ� ����ü�� ũ�� �����Ҵ�
  STUDENT *student_info = (STUDENT *)malloc(student_num * sizeof(STUDENT));

  // �л��� ���� �Է¹ޱ�
  for (int i = 0; i < student_num; i++) {
    printf("�л� %d�� ������ �Է��ϼ���.\n", i + 1);
    InitializeStudent(&student_info[i]);
  }

  char ch = getchar();  // ���� �ӽ� ���� ����

  char target;

  // ���� �Է¹ް� terget�� ����
  printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
  scanf_s("%c", &target, 1);

  // �Լ� ȣ��
  ClassifyStudents(student_info, target, student_num);

  int sum = SumScores(student_info, student_num);
  double average = AverageScores(student_info, student_num);
  printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

  PrintRanks(student_info, student_num);
  return 0;
}

// �л��� ������ �Է¹޾� ����ü�� �Է¹��� ���� �����ϴ� �Լ�
void InitializeStudent(STUDENT *student_info) {
  // �̸� �Է¹ޱ�: temp������ �ӽ������Ͽ� �����Ҵ� �� ����ü�� ����
  printf("�̸�: ");
  char temp[100];
  scanf_s("%s", temp, (int)sizeof(temp));
  student_info->name = (char *)malloc((strlen(temp) + 1) * sizeof(char));
  strcpy_s(student_info->name, strlen(temp) + 1, temp);

  // ���� �Է¹ޱ�
  printf("����: ");
  scanf_s("%d", &student_info->score);
}

// ���� �з��ϴ� �Լ�
void ClassifyStudents(STUDENT *student_info, char targetGrade,
                      int student_num) {
  printf("�л� ���� �з�:\n");
  char grade = ' ';  // ���ڿ� ���� ����

  /* ������ ���� ���� ���� �� �˰����ϴ� �л��� ���� ���,
   i < STUDENTS�϶����� ����, i ��� �� + 1*/
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
      printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", student_info[i].name, targetGrade);
    }
  }
}

// ��� ������ ���� ���ϴ� �Լ� ����
int SumScores(STUDENT *student_info, int student_num) {
  int sum = 0;
  for (int i = 0; i < student_num; i++) {
    sum += student_info[i].score;
  }
  return sum;
}

// ������ ����� ���ϴ� �Լ� ����
double AverageScores(STUDENT *student_info, int student_num) {
  int sum = 0;
  double average = 0;
  for (int i = 0; i < student_num; i++) {
    sum += student_info[i].score;
  }
  average = (double)sum / student_num;
  return average;
}

// �л����� ������ ����ϴ� �Լ� ����
void PrintRanks(STUDENT *student_info, int student_num) {
  for (int i = 0; i < student_num; i++) {
    int ranks = 1;  // �ʱ� ����: 1
    for (int j = 0; j < student_num; j++) {
      // scores[i] < scores[j] �� ��� ranks + 1
      if (student_info[i].score < student_info[j].score) {
        ranks += 1;
      }
    }
    printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, ranks);
  }
}