#include <stdio.h>

// ��� ����
#define NUMCITY 3
#define NUMPEOPLE 2

// �迭 ����
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

// �Լ� ����
void calculateTravelDays();
int getSum(int numArray[], int length);
double getAverage(int numArray[], int length);
void printFamousCity(double dayArray[], int length);

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

	// 2���� �迭 ����(��: NUMCITY, ��: NUMPEOPLE, 3x2)
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է� �ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);  // �� ���ú� �� ����� ���� �� �� ����
		}
	}

	// ��� �ϼ� ������ �迭 ����(NUMCITY��ŭ�� ũ��)
	double averageDays[NUMCITY];

	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDays = getSum(travelDays[i], NUMPEOPLE);          // getSum �Լ� ȣ��, travelDays�� i��° �� ����
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);  // getAverage�Լ� ȣ��, travelDays�� i��° �� ����
		printf("���� %s���� ���� �� �� �� : %d, ��� �� �� : %.2f\n", cities[i], totalDays, averageDay);
		averageDays[i] = averageDay;
	}
	printFamousCity(averageDays, NUMCITY);
}

// �� �ϼ� ���ϴ� �Լ� ����
int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {  
		totalDays += numArray[i];  // �־��� �迭�� �� ���� i<length���� ���ϱ�
	}
	return totalDays;              // ȣ�⹮�� totalDays ��ȯ
}

// ��� �� �� ���ϴ� �Լ� ����
double getAverage(int numArray[],int length) {
	int totalDays = getSum(numArray, length);        // getSum �Լ� ȣ��, �� �ϼ� ���ϱ�
	double averageDay = (double)totalDays / length;  // int���� totalDays ���� double�� �ٲپ� ��� ���
	return averageDay;  // ��� �� ��ȯ
}

// ���� �α��ִ� ���� ��� �Լ� ����
void printFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {    // dayArray[i] > maxDay�̸� maxDayIndex�� i�� ���� �� i+1, �ƴϸ� �׳� i+1, i < length ����
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}

	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��� �ӹ���: %.2f)\n", cities[maxDayIndex], maxDay);  // ���� �α��־��� ���� ���
}