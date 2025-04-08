# include <stdio.h>
main()
{
int n,i,j;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n+1-i;j++){
        printf(" *");
      }
      printf("\n");
    }
    getch();
    printf("\n");
}


