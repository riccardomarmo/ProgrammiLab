#include <stdio.h>


double serie_ric(int n, int k)
{
  if (k == 0) return 1;
  
  return serie_ric(n, k+1);
}


void main()
{
  
}