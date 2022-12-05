#include <stdio.h>

int is_prime_ric(int num, int div)
{

  if(div == 0) return 0;
  
  if(div != 1 && div != num && num%div == 0)
  {
    return div;
  }
  
  return is_prime_ric(num, div-1);
}


void main()
{
  int num;

  printf("Inserire numero: ");
  scanf("%d", &num);
  printf("\n");


  if(is_prime_ric(num, num-1) == 0)
  {
    printf("Il numero e' primo.\n");
  }
  else
  {
    printf("Il numero non e' primo.\n");
    printf("Il primo divisore è': %d\n", is_prime_ric(num, num));
  }
  
  
}