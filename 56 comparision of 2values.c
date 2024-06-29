# include <stdio.h>
main()
{
  int a,b;
  printf("ENTER THE NUMBER A AND B: \n");
  scanf("%d%d" ,&a,&b);
 if (a<b)
   printf("UP");
  else if (a>b)
    printf("DOWN");
  else
    printf("EQUAL");
 getch();
  printf("\n");
}
