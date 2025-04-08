# include <stdio.h>
main()
{
int n,i,a,j;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
      a=1;
      for(j=1;j<=n;j++)
      {
    printf(" %d" ,a);
       a=a+2;
      }
printf("\n");
    }
    getch();
    printf("\n");
}


