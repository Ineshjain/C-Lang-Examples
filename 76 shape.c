 # include <stdio.h>
main()
{
  int n,m,i;
  printf("ENTER NUMBER OF ROWS: ");
  scanf("%d" ,&n);
  printf("ENTER NUMBER OF colums: ");
  scanf("%d" ,&m);
  for(i=1;i<=n;i++)//outer loop is for rows
    { for(i=1;i<=m;i++)//inner loop is for colums
      printf(" * ");}
  printf("\n");



}
