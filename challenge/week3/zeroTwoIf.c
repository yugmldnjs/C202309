#include <stdio.h>

int main(void) {
	int num = 0;

	//���� �Է� �ޱ�
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	// num�� 0�� �� "zero" ���
	if (num == 0) {
		printf("zero");
	}

	// num�� 1�� �� "one" ���
	else if (num == 1) {
		printf("one");
	}

	// num�� 2�� �� "two" ���
	else if (num == 2) {
		printf("two");
	}

	// 0~2�� ���� �ƴ� �� ����
	else {
		printf("not 0 ~ 2");
	}

	return 0;
}