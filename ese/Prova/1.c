#include <stdio.h>

float succ_ric(int n)
{
  if(n == 0) return 1;
  if(n == 1) return 3;

  float s_n = ( ((succ_ric(n-1)+3)/(2*n)) + succ_ric(n-2) );

  return s_n;
}

void main()
{
  printf("Risultato: %f\n", succ_ric(4));
}