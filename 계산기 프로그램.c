#include <stdio.h>
int sum (int n, int m) {
  int sum = 0;
  sum = n + m;
  return sum;
}
int min (int n, int m) {
  int sum = 0;
  sum = n - m;
  return sum;
}
int mul (int n, int m) {
  int sum = 0;
  sum = n * m;
  return sum;
}
float div (int n, int m) {
  float sum = 0;
  sum = (double) n / m;
  return sum;
}
int main () {
  int i, k, n, m;
  float j;
  do {
    printf("아래의 메뉴 중 원하는 메뉴 번호를 하나 선택하세요.\n");
    printf("1. 덧셈\n");
    printf("2. 뺄셈\n");
    printf("3. 곱셈\n");
    printf("4. 나눗셈\n");
    scanf("%d", &i);
  } while (i<1||i>4);
  printf("두 수를 입력하세요:");       
  scanf("%d %d", &n, &m);
    switch (i) {
      case 1:
        k = sum(n, m);
        printf("%d", k);
        break;
      case 2:
        k = min(n, m);
        printf("%d", k);
        break;
      case 3:
        k = mul(n, m);
        printf("%d", k);
        break;
      case 4:
        j = div(n, m);
        printf("%f", j);
        break;
      default:
        break;
    }
  return 0;
}