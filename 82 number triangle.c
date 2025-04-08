# include <stdio.h>
main()
{
int n,i,j;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++){
        printf(" %d" ,j);
      }
      printf("\n");
    }
    getch();
    printf("\n");
}
