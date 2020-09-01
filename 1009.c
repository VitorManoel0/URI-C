#include <stdio.h>

int main() {
  double sal, com, total;
  char nome[50];
  
  scanf("%s" ,nome);
  scanf("%lf %lf" ,&sal,&com);
  total = (sal+((com*15)/100));
  printf("TOTAL = R$ %.2lf\n",total);
  return 0;
}
