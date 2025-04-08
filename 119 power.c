# include <stdio.h>
int main()
{
  int a,b,i,power;
  a=b=power=1;
  printf("ENTER A BASE NUMBER: ");
  scanf("%d" ,&a);
    printf("ENTER A POWER NUMBER: ");
    scanf("%d" ,&b);
  for(i=1;i<=b;i++)
    {
      power=a*power;
    }
  printf("%d\n",power);
}
