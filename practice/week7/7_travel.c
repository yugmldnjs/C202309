#include <stdio.h>

// ��� ����
#define NUMCITY 3
#define NUMPEOPLE 2

// �迭 ����
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

// �Լ� ����
void calculateTravelDays();

int main() {


	// ����ڷκ��� ���� �̸� �ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);

	// i < NUMCITY �� ������ ���ø� ����
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}


	//����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���. \n", NUMPEOPLE);
	
	// i < NUMPEOPLE �� ������ �����ڸ� ����
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// �Լ� ȣ��
	calculateTravelDays();

	return 0;
}

// �Լ� ����
void calculateTravelDays() {

	// 2���� �迭 ����(��: NUMCITY, ��: NUMPEOPLE)
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է� �ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);  // 2���� �迭�� �� ���ú� ���� ü���� ����
		}
	}



	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totalDays += travelDays[i][j];
		}
		float averageDays = (float)totalDays / NUMPEOPLE;
		printf("���� %s���� ���� �� �� �� : %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDays);
	
	}

}
