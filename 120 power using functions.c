# include <stdio.h>
int power(int a ,int b)
{
  int p=1;
  for (int i=1;i<=b;i++)
    p=p*a;
  return p;
}
int main()
{
  int a,b,i;
  a=b=1;
  printf("ENTER A BASE NUMBER: ");
  scanf("%d" ,&a);
    printf("ENTER A POWER NUMBER: ");
    scanf("%d" ,&b);
  int p=power(a,b);
  printf("%d\n",p);
}
