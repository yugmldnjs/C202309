#include <stdio.h>

long multiF(long value);  // �Լ� ����


// 1���� n������ �� ���, multiF �Լ� ȣ���Ͽ� ���
int main(void) {
	printf("1���� 2������ ���� %d\n", multiF(2));
	printf("1���� 3������ ���� %d\n", multiF(3));
	printf("1���� 5������ ���� %d\n", multiF(5));
}


// �Լ� ����
long multiF(long value) {
	long i;
	long multi = 1;


	// i <= value���� ���๮ �ݺ�, �ѹ� ����� ���� i+1
	for (i = 1; i <= value; i++) {
		multi = multi * i;
	}

	return multi;  // ȣ�⹮�� multi ��ȯ
}