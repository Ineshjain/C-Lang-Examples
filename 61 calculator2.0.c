#include <stdio.h>
main()
{
int a,b,c;
  a=b=c=0;
char opt;
  a=b=c=0;
  printf("\t\t\t\t\tCALCULATOR\n");
  printf("ENTER THE FIRST NUMBER: ");
  scanf("%d" ,&a);
  printf("ENTER YOUR OPT.(+,-,*,/): ");
  fflush(stdin);
  scanf("%c" ,&opt);
  printf("ENTER THE SECOND NMBER: ");
  fflush(stdin);
  scanf("%d" ,&b);
  switch(opt)
    {
      case '+':c=a+b;break;
      case '-':c=a-b;break;
      case '*':c=a*b;break;
      case '/':c=a/b;break;
      default:printf("INVALID OPT.");
    }
      if(opt=='+' || opt=='-' || opt=='*' || opt=='/')
        printf("THE RESULT IS %d" ,c);
        getch();
        printf("\n");
}
