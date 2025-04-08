# include <stdio.h>
int fibo(int n)
{
  if (n==1 || n==2) return 1;
  else return fibo(n-1) + fibo(n-2);
}
int main()
{
  int n;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  printf("THE %dth FIBONACCI NUMBER IS %d\n" ,n,fibo(n));
}
