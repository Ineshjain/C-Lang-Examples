# include <stdio.h>
int sum(int n)
{
  if(n==1||n==0) return 1;//base case
 int result = n+sum(n-1);
  return result;
}
int main()
{
  int n;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
 printf("%d" ,sum(n));
 printf("\n");
}
