#include <stdio.h>

/*함수 선언*/
void summation(double* value1, double* value2, double* value3);
void subtraction(double* value1, double* value2, double* value3);
void multification(double* value1, double* value2, double* value3);
void division(double* value1, double* value2, double* value3);

int main() {
  double a = 2, b = 3;
  double result;

  // summation 함수 호출을 통해 두 변수 의 합 구하기
  summation(&a, &b, &result);
  printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

  // subtraction 함수 호출을 통해 두 변수의 차 구하기
  subtraction(&a, &b, &result);
  printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

  // multification 함수 호출을 통해 두 변수의 곱 구하기
  multification(&a, &b, &result);
  printf("%.0lf * %.0lf = %.2lf \n", a, b, result);

  // division 함수 호출을 통해 두 변수의 몫 구하기
  division(&a, &b, &result);
  printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

  return 0;
}

/*함수 정의*/
// 두 변수의 합을 구하는 함수
void summation(double* value1, double* value2, double* value3) {
  *value3 = *value1 + *value2;
}

// 두 변수의 차을 구하는 함수
void subtraction(double* value1, double* value2, double* value3) {
  *value3 = *value1 - *value2;
}

// 두 변수의 곱을 구하는 함수
void multification(double* value1, double* value2, double* value3) {
  *value3 = *value1 * *value2;
}

// 두 변수의 몫을 구하는 함수
void division(double* value1, double* value2, double* value3) {
  *value3 = *value1 / *value2;
}
