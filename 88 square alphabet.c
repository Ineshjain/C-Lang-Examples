# include <stdio.h>
main()
{
int n,i,a,j,d;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
      a=1;
      for(j=1;j<=n;j++)
        {
          int d=a+64;
          char ch=(char)d;
        printf(" %c" ,d);
          a++;
      }
printf("\n");
    }
    getch();
    printf("\n");
}



