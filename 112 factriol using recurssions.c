# include <stdio.h>
int factriol(int n)
{
  if (n==0 ||n==1)
    return 1;
  return n*factriol(n-1);
}
int main()
{
  int a;
  printf("ENTER A NUMBER: ");
  scanf("%d",&a);
  factriol(a);
  printf("FACTRIOL OF %d IS %d",a,factriol(a));
  printf("\n");
  return 0;
  getch();

}
