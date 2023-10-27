#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하는 2차원 배열(저장 가능한 할 일 수 = 10, 각 할 일 당 크기 = 100)
	int taskCount = 0; // 할 일의 총 수를 저장

	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// TODO 리스트 메뉴 출력 및 실행 메뉴 입력 받기 
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료하기 위한 변수
		int delIndex = -1;  // 할 일 삭제를 위한 index번호를 저장
		int changeIndex = -1; // 할 일 수정을 위한 index번호를 저장
		char ch; // 할 일 수정시 enter값 날리기 위한 변수

		// 기능 수행
		switch (choice) {
		case 1:
			// 할 일 입력받기
			printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("할 일 ""%s""가 저장되었습니다\n\n", tasks[taskCount]);
			taskCount++;
			break;

		case 2:
			// 할 일 삭제
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &delIndex);

			// delIndex > taskCount이거나 delIndex <= 0일 경우 실행
			if (delIndex > taskCount || delIndex <= 0) {  
				printf("삭제 범위가 벗어났습니다.\n");
			}

			else {
				printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

				// 문자열 복사 함수로 삭제
				// tasks[delIndex - 1]에 ""복사 (= tasks[delIndex - 1] 값 삭제) 
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// 삭제한 인덱스 뒤의 값들을 앞으로 옮기기
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);  // tasks[i - 1]에 tasks[i]값 복사
				}
				taskCount -= 1;
			}
			break;

		case 3:
			// 할 일 목록 출력
			printf("할 일 목록\n");

			// i < taskCount까지 task 각 행을 출력
			for (int i = 0; i < taskCount; i++) {  
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;

		case 4:
			// 4. 프로그램 종료
			terminate = 1;
			break;

		case 5:
			// 5. 할 일 수정
			printf("수정할 할 일의 번호를 입력해주세요: ");  // 수정할 할 일 번호 입력 받기
			scanf_s("%d", &changeIndex);
			
			ch = getchar();  // enter 값 삭제

			printf("수정된 할 일을 입력해주세요: ");  // 수정된 할 일 내용 입력 받기
			scanf_s("%s", tasks[changeIndex-1], (int)sizeof(tasks[changeIndex-1]));  // 입력받은 번호보다 하나 작은 인덱스에 할 일 저장
			printf("""%d""번 할 일이 ""%s""로 수정되었습니다.\n", changeIndex, tasks[changeIndex - 1]);
			break;

		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		// 할 일이 다 찼는 지 확인
		if (taskCount == 10) {  // taskCount가 10이면 terminate에 1 저장
			printf("할 일의 수가 10개가 되어 프로그램을 종료합니다.");
			terminate = 1;
			break;
		}

		// terminate가 1이 되면 프로그램 종료
		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}


	}
}