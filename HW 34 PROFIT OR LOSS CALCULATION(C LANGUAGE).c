# include <stdio.h>
main()
{
  int a,b;
  a=b=0;
  printf("\t\t\t\t\t U GOT PROFIT OR LOSS??\n");
    printf("\nENTER THE COST PRICE OF THE PRODUCT: ");
  scanf("%d" ,&a);
  printf("ENTER THE SELLING PRICE OF THE PRODUCT: ");
  scanf("%d" ,&b);
  if(a>b)
    printf("YOU ARE IN LOSS OF %d.."  ,a-b);
  else if (a<b)
    printf("YOU EARNED A PROFIT OF %d!!"  ,b-a);
  else
    printf("YOU HAVE NEITHER PROFIT NOR LOSS..");
  getch();
  printf("\n");
  }


