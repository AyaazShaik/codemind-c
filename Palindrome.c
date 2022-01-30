#include <stdio.h>
int main()
{
  int n, r = 0, t;
  scanf("%d", &n);
  t = n;
  while (t != 0)
  {
    r = r * 10;
    r = r + t%10;
    t = t/10;
  }
  if (n == r)
    printf("True");
  else
    printf("False");
  return 0;
}