# include <stdio.h>
main()
{
 int i,n,sum;
  i=n=0;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  sum=0;
  for(i=1;i<=n*2;i++)
    if(i%2!=0)
      sum=sum+i;
  printf("THE SUM OF FIRST %d ODD NUMBERS IS: %d" ,n,sum);
  getch();
  printf("\n");
}
