# include <stdio.h>
int power(int a ,int b)
{
  if (b==0) return 1;
  else return a*power(a,b-1);
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
