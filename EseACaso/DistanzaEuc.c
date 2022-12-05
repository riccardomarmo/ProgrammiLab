#include <stdio.h>
#include <math.h>


double potenza(double a, double b)
{
  double ris = a;
  
  for(int i = 1; i<b; i++)
  {
    ris = ris*a;
  }

  return ris; 
}


double dis_euc(double x1, double x2, double y1, double y2)
{

  return sqrt(potenza(x1 - x2, 2) + potenza(y1 - y2, 2));
}

void main()
{

  double x1,x2,y1,y2;
  
  printf("x1: ");
  scanf("%lf", &x1);

  printf("y1: ");
  scanf("%lf", &y1);

  printf("x2: ");
  scanf("%lf", &x2);

  printf("y2: ");
  scanf("%lf", &y2);

  printf("La distanza e': %lf\n", dis_euc(x1,x2,y1,y2));
}