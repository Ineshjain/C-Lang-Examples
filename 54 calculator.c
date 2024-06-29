# include <stdio.h>
main()
{
  printf("\t\t\t\tCALCULATOR..");
  int a,b,total;
   printf("\n1. ADDITION\n");
   printf("2. SUBTRACTION\n");
   printf("3. MULTIPLICATION\n");
   printf("4. DIVISION\n");
  printf("ENTER A NUMBER: ");
  scanf("%d"  ,&total);
  printf("ENTER NUMBER: ");
  scanf("%d" ,&a);
  printf("ENTER NUMBER: ");
  scanf("%d" ,&b);
  switch(total)
    {
      case 1:total=a+b; break;
      case 2:total=a-b;break;
      case 3:total=a*b;break;
      case 4:total=a/b;break;
      default : printf("\a\n\t\t\t\t\t\t INVALID INPUT ");
    }
  printf("THE TOTAL IS: %d" ,total);
  getch();
  printf("\n");

}
