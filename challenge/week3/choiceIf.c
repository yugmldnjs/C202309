#include <stdio.h>

int main(void) {
	int choice;
	// ������ 1,2,3 ��� �� ���� �Է� �ޱ�
	printf("1. ��������\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice);

	// 1�� �Է� �޾��� ��� ���๮ ���
	if (choice == 1) {
		printf("������ �����մϴ�.");
	}
	// 2�� �Է� �޾��� ��� ���๮ ���
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");
	}
	// 3�� �Է� �޾��� ��� ���๮ ���
	else if (choice == 3) {
		printf("�����մϴ�.");
	}
	// 1, 2, 3 ���� ���� �Է� �޾��� ���
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}

	return 0;
}