# include <stdio.h>
int min(int a,int b)
{
  if(a<b) return a;
  else return b;
}
int gcd(int a,int b)
{
 int hcf;
  for(int i=min(a,b);i>=1;i--)
    {
      if(a%i==0 && b%i==0)
      {
        hcf=i;
      break;
      }
    }
  return hcf;
}
int main()
{
  int a,b;
  printf("ENTER 1ST VALUE: ");
  scanf("%d" ,&a);
  printf("ENTER 2ND VALUE: ");
  scanf("%d" ,&b);
  int hcf=gcd(a,b);
  printf("HCF OF %d AND %d IS: %d" ,a,b,hcf);
printf("\n");
}
