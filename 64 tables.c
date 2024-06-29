# include <stdio.h>
main()
{
  int i,result,number;
  i=0;
  printf("ENTER THE NUMBER OF TABLE YOU WANT..: ");
  scanf("%d" ,&number);
  printf("\n");
  for (i=1;i<=12;i++)
    { result=number*i;
  printf("%d*%d=%d\n" ,number,i,result);
    }
    getch();
    printf("\n");
  }
