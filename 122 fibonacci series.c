# include <stdio.h>
int main()
{
  int n,a,b,sum,i;
 a=0;
b=sum=1;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  printf("THE FIBONACCI SERIES OF FIRST %d NUMBERS IS:\n",n);
  for(i=1;i<=n;i++)
    {
      printf(" %d",sum);
      sum=a+b;
      a=b;
      b=sum;
    }
    printf("\n");
}
