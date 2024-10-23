#include <stdio.h>

int main(){
  
  int x;
  int y;

  printf("Digite o primeiro número:\n");
  scanf("%d", &x);
  printf("Digite o segundo número:\n");
  scanf("%d", &y);
  int mult = x * y;
  printf("A multiplicação entre os dois números é: %d\n", mult);

  return 0;
}
