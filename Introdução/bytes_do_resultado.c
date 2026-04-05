#include <stdio.h>

int main(void)
{
  int expressao1 = sizeof(7 / 2);
  float expressao2 = sizeof(7.0 / 2.0);
  printf("%d, %.2f", expressao1, expressao2);
  return 0;
}