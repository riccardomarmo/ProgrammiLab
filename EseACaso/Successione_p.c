#include <stdio.h>
#include <math.h>

double a_np(int n, double p)
{
  double a_n = p;
  
  for(int i = 2; i<n; i++)
    {
      a_n = 0.5*(a_n + p/a_n);
      printf("a_%d : %lf\n",i , a_n);
      
    } 
}


void main()
{
  a_np(20, 49);
}