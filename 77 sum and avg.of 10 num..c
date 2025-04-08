# include <stdio.h>
main()
{
int sum,i,n;
float avg;
sum=n=avg=0;
  for(i=1;i<=10;i++)
  {
    printf("\nENTER %d NUMBER: " ,i);
    scanf("%d" ,&n);
    sum=sum+n;
    avg=sum/10;
  }
  printf("\nSUM OF 10 NUMBERs IS %d" ,sum);
  printf("\nAVERAGE OF 10 NUMBERS IS %f" ,avg);
  getch();
  printf("\n");
}

