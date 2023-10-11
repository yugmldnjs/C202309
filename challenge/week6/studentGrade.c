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


// ��� ������ ���� ���ϴ� �Լ� ����
int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	return sum;
}


// ������ ����� ���ϴ� �Լ� ����
double averageScores(int scores[]) {
	int sum = 0;
	double average = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}
	average = (double)sum / STUDENTS;
	return average;
}


// �л����� ������ ����ϴ� �Լ� ����
void printRanks(int scores[]) {
	
	for (int i = 0; i < STUDENTS; i++) {
		int ranks = 1;
		for (int j = 0; j < STUDENTS; j++) {
			
			// scores[i] < scores[j] �� ��� ranks + 1
			if (scores[i] < scores[j]) {
				ranks += 1;
			}
		}
		printf("%d �л��� ������ %d �Դϴ�.\n", i + 1, ranks);
	}
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


	// �Լ� ȣ��
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);
	
	printRanks(scores);
	return 0;
}