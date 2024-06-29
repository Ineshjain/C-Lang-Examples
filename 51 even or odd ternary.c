# include <stdio.h>
main()
{
  int number;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&number);

  number%2==0 ? printf("EVEN NUMBER") : printf("ODD NUMBER");
  getch();
  printf("\n");
}
