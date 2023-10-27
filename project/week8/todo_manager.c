#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϴ� 2���� �迭(���� ������ �� �� �� = 10, �� �� �� �� ũ�� = 100)
	int taskCount = 0; // �� ���� �� ���� ����

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// TODO ����Ʈ �޴� ��� �� ���� �޴� �Է� �ޱ� 
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // �����ϱ� ���� ����
		int delIndex = -1;  // �� �� ������ ���� index��ȣ�� ����
		int changeIndex = -1; // �� �� ������ ���� index��ȣ�� ����
		char ch; // �� �� ������ enter�� ������ ���� ����

		// ��� ����
		switch (choice) {
		case 1:
			// �� �� �Է¹ޱ�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++;
			break;

		case 2:
			// �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
			scanf_s("%d", &delIndex);

			// delIndex > taskCount�̰ų� delIndex <= 0�� ��� ����
			if (delIndex > taskCount || delIndex <= 0) {  
				printf("���� ������ ������ϴ�.\n");
			}

			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// ���ڿ� ���� �Լ��� ����
				// tasks[delIndex - 1]�� ""���� (= tasks[delIndex - 1] �� ����) 
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// ������ �ε��� ���� ������ ������ �ű��
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  // tasks[i - 1]�� tasks[i]�� ����
				}
				taskCount -= 1;
			}
			break;

		case 3:
			// �� �� ��� ���
			printf("�� �� ���\n");

			// i < taskCount���� task �� ���� ���
			for (int i = 0; i < taskCount; i++) {  
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;

		case 4:
			// 4. ���α׷� ����
			terminate = 1;
			break;

		case 5:
			// 5. �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���: ");  // ������ �� �� ��ȣ �Է� �ޱ�
			scanf_s("%d", &changeIndex);
			
			ch = getchar();  // enter �� ����

			printf("������ �� ���� �Է����ּ���: ");  // ������ �� �� ���� �Է� �ޱ�
			scanf_s("%s", tasks[changeIndex-1], (int)sizeof(tasks[changeIndex-1]));  // �Է¹��� ��ȣ���� �ϳ� ���� �ε����� �� �� ����
			printf("""%d""�� �� ���� ""%s""�� �����Ǿ����ϴ�.\n", changeIndex, tasks[changeIndex - 1]);
			break;

		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		// �� ���� �� á�� �� Ȯ��
		if (taskCount == 10) {  // taskCount�� 10�̸� terminate�� 1 ����
			printf("�� ���� ���� 10���� �Ǿ� ���α׷��� �����մϴ�.");
			terminate = 1;
			break;
		}

		// terminate�� 1�� �Ǹ� ���α׷� ����
		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}


	}
}