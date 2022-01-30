#include <stdio.h>
int main()
{
   int n,t,sum = 0,remainder;
   scanf("%d", &n);
   t=n;
  while (t>9)
  {
    sum=0;  
  while(t>0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
   t=sum;
  }
   printf("%d",sum);
   return 0;
}