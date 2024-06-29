# include <stdio.h>
main()
{
  printf("\t\t\tLETS CHECK WETHER A NUMBER IS EVEN OR NOT");
  int a;
  a=0;
  printf("\n");
  printf("\nwrite a number: ");
  scanf("%d",&a);
  printf("%d", a%2 ==0);
  return 0;
  getch();
}

