#include <stdio.h>

int main(void) {
	int floor;
	printf("�� ���� �װڽ��ϱ�? (5 ~ 100): ");  // ���� �Է� �ޱ�
	scanf_s("%d", &floor);  // �Է°� ���� floor�� ����

	// �� floor�� ��ŭ ���
	for (int i = 1; i <= floor; i++) {

		// j�� i �� ����, j�� floor-1�� �۰ų� ���������� "S"��� �ݺ�, ���๮ ���� �� j + 1
		for (int j = i; j <= floor - 1; j++) {
			printf("S");
		}

		// i*2-1 �϶����� "*"��� �ݺ�, ���๮ ���� �� k+1
		for (int k = 1; k <= i*2-1; k++) {
			printf("*");
		}

		// �� �� ��� �� �� �� ����
		printf("\n"); 
	}

	return 0;
}