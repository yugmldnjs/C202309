#include <stdio.h>

/*�Լ� ����*/
void summation(double* value1, double* value2, double* value3);
void subtraction(double* value1, double* value2, double* value3);
void multification(double* value1, double* value2, double* value3);
void division(double* value1, double* value2, double* value3);

int main() {
  double a = 2, b = 3;
  double result;

  // summation �Լ� ȣ���� ���� �� ���� �� �� ���ϱ�
  summation(&a, &b, &result);
  printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

  // subtraction �Լ� ȣ���� ���� �� ������ �� ���ϱ�
  subtraction(&a, &b, &result);
  printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

  // multification �Լ� ȣ���� ���� �� ������ �� ���ϱ�
  multification(&a, &b, &result);
  printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

  // division �Լ� ȣ���� ���� �� ������ �� ���ϱ�
  division(&a, &b, &result);
  printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

  return 0;
}

/*�Լ� ����*/
// �� ������ ���� ���ϴ� �Լ�
void summation(double* value1, double* value2, double* value3) {
  *value3 = *value1 + *value2;
}

// �� ������ ���� ���ϴ� �Լ�
void subtraction(double* value1, double* value2, double* value3) {
  *value3 = *value1 - *value2;
}

// �� ������ ���� ���ϴ� �Լ�
void multification(double* value1, double* value2, double* value3) {
  *value3 = *value1 * *value2;
}

// �� ������ ���� ���ϴ� �Լ�
void division(double* value1, double* value2, double* value3) {
  *value3 = *value1 / *value2;
}
