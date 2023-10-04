#include <stdio.h>
int hapf(int value);  // 함수선언


// 1부터 n까지의 합 출력, hapf 함수 호출하여 계산
int main(void) {
	printf("1부터   10까지의 합은 %d\n", hapf(10));
	printf("1부터  100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}


// 함수 정의
int hapf(int value) {
	int i = 1;
	int hap = 0;
	
	while (i <= value) {        // i<= value까지 실행문 반복
		hap = hap + i, i++;     
	}
	return hap;   // 호출문에 hap 반환
}
