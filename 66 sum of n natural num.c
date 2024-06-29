# include <stdio.h>
main()
{
  long long int i,sum,n;
  i=sum=n=0;
  printf("SUM OF FIRST N NATURAL NUMBERS:  ");
  scanf("%lld" ,&n);
  i=1;
  while(i<=n)
    {
      sum=sum+i;
      i++;
    }
  printf("THE SUM OF FIRST %lld NATURAL NUMBERS IS %lld" ,n,sum);
  getch();
  printf("\n");
}
