#include <stdio.h>
int hapf(int value);  // �Լ�����


// 1���� n������ �� ���, hapf �Լ� ȣ���Ͽ� ���
int main(void) {
	printf("1����   10������ ���� %d\n", hapf(10));
	printf("1����  100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}


// �Լ� ����
int hapf(int value) {
	int i = 1;
	int hap = 0;
	
	while (i <= value) {        // i<= value���� ���๮ �ݺ�
		hap = hap + i, i++;     
	}
	return hap;   // ȣ�⹮�� hap ��ȯ
}
