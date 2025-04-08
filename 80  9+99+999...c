# include <stdio.h>
main()
{//9+99+999+9999...n
  int i,n;
  long long sum=0;
  long long term=9;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
        sum=sum+term;
        term=term*10+9;
    }
  printf("SUM OF SERIES IS %lld" ,sum);
getch();
  printf("\n");
}

