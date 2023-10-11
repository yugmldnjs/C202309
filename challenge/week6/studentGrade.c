#include <stdio.h>
#define STUDENTS 5  // ��� STUDENTS ����

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");
	char grade = ' ';  //���ڿ� ���� ����

	/* ������ ���� ���� ���� �� �˰����ϴ� �л��� ���� ���,
	 i < STUDENTS�϶����� ����, i ��� �� + 1*/
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[], int sum) {
	/*int sum = 0;*/

	// ��� ������ �� ��� �� ���, i < STUDENTS ���� ����
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	printf("�л��� ������ �� ���� %d�̴�", sum);
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
	int scores[STUDENTS];  // �迭 ����


	// i < STUDENTS�϶����� ���� �Է¹ޱ� �ݺ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();  // ���� �ӽ� ���� ����, ���� ����� ����

	char target;

	// ���� �Է¹ް� terget�� ����
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�:");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);
	
	printRanks(scores);
	return 0;
}