#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

// �л��� ��ռ��� ��� �Լ� ����
void printStudentResult(double studentScores[][SUBJECTS],
                        char studentNames[][CHARNUM]) {
  for (int i = 0; i < STUDENTS; i++) {
    double sumScore = 0;

    for (int j = 0; j < SUBJECTS; j++) {
      sumScore += studentScores[i][j];  // �л��� �� ����
    }
    double averageScore = sumScore / SUBJECTS;  // �л��� ��� ����
    printf("\t%s�� ��� ���� : % .2lf\n", studentNames[i], averageScore);
  }
}

// ���� ��ռ��� ��� �Լ� ����
void printSubjectResult(double studentScores[][SUBJECTS],
                        char subjectNames[][CHARNUM]) {
  for (int i = 0; i < SUBJECTS; i++) {
    double sumScore = 0;

    for (int j = 0; j < STUDENTS; j++) {
      sumScore += studentScores[j][i];  // ���� �� ����
    }
    double subjectScore = sumScore / STUDENTS;  // ���� ��� ����
    printf("\t%s�� ��� ������ % .2lf �Դϴ�.\n", subjectNames[i],
           subjectScore);
  }
}

int main() {
  char subjectNames[SUBJECTS][CHARNUM] = {"����", "�߰����", "�⸻���"};
  char studentNames[STUDENTS][CHARNUM] = {""};  // �л� �̸��� ����� �迭
  double studentScores[STUDENTS][SUBJECTS] = {0.0};  // �л��� ���� �� ������ ������ ����� �迭
  printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);

  // TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
  for (int i = 0; i < STUDENTS; i++) {
    printf("	%d��° �л��� �̸��� �Է��ϼ���: ", i + 1);
    scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
  }
  getchar();

  // �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
  printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
  printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
  for (int i = 0; i < STUDENTS; i++) {
    printf("%s", studentNames[i]);
    if (i != STUDENTS - 1) {
      printf(", ");
    }
  }
  printf("\n");
  printf("--------------------\n");
  printf(
      "�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ",
      subjectNames[0], subjectNames[1], subjectNames[2]);

  // TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�
  for (int i = 0; i < STUDENTS; i++) {
    printf("	%s�� ����: ", studentNames[i]);
    scanf_s("%lf %lf %lf", &studentScores[i][0], &studentScores[i][1],
            &studentScores[i][2]);
  }
  getchar();

  printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
  printf("--------------------\n");
  printf("�л� �� ������ ������ �����ϴ� \n");

  // TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i],
  // finalScore);

  printStudentResult(studentScores, studentNames);

  printf("--------------------\n");
  printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
  // TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
  // HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���
  // HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n",
  // subjectNames[i], subjectScore);

  printSubjectResult(studentScores, subjectNames);

  printf("���α׷��� �����մϴ�. ");
  return 0;
}