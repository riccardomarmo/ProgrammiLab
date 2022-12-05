#include <stdio.h>


int gcd(int a, int b)
{
  
  if(a == b) return a;

  if(a > b) return gcd(a-b, b);

  if(a < b) return gcd(a, b-a);

}


void main()
{

  int g, h;
  
  printf("Inserire il primo valore intero: ");
  scanf("%d", &g);
  printf("\n");  
  
  printf("Inserire il secondo valore intero: ");
  scanf("%d", &h);

  printf("Il GCD di %d e %d e': %d\n", g, h, gcd(g, h));
  
}
