#include<stdio.h>
 
long factorial(int);
 
int main()
{
  int n;
  long f;
 
  printf("Enter an integer to find factorial\n");
  scanf("%d", &n); 
 
  if (n < 0)
    printf("Negative integers are not allowed.\n");
  else
  {
    f = factorial(n);
    printf("%d! = %ld\n", n, f);
  }
 
  return 0;
}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}