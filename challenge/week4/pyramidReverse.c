#include <stdio.h>

int main(void) {

	int floor;
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100): ");  // ���� �Է� �ޱ�
	scanf_s("%d", &floor);  // �Է°� ���� floor�� ����

	// �� floor�� ��ŭ ���, i>=1 �϶����� �ݺ�, ���๮ ���� �� i - 1
	for (int i = floor; i >= 1; i--) {

		// j�� i�� ����, j < floor �϶����� "S" ��� �ݺ�, ���๮ ���� �� j+1
		for (int j = i; j < floor; j++) {
			printf("S");
		}

		// k�� i*2-1 �϶����� "*"��� �ݺ�, ���๮ ���� �� k+1
		for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}

		// �� �� ��� �� �� �� ����
		printf("\n");
	}

	return 0;
}
