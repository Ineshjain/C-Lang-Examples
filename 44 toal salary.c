# include <stdio.h>
main()
{
  printf("\t\t\t\t\tYOUR TOTAL SALARY!!\n");
  int basic,allowane,deduction,exprience,gross,net,total,month;
  printf("\nENTER THE BASIC SALARY OF THE EMPLOYEE: ");
  scanf("%d" ,&basic);
  printf("\nENTER THE ALLOWANE OF THE EMPLOYEE: ");
  scanf("%d" ,&allowane);
  printf("\nENTER THE DEDUCTION OF THE EMPLOYEE: ");
  scanf("%d" ,&deduction);
  printf("\nENTER THE EXPERIENCE OF THE: ");
  scanf("%d" ,&exprience);
  gross=basic+allowane-deduction;
  if(exprience>=5 && exprience<12)
  {
    month=gross/12;
  net=month*3;
  total=net+gross;
  }
  else if (exprience<5 && exprience>=3)
   { month=gross/12;
    net=month*2;
  total=net+gross;
   }
  else if (exprience<3 && exprience>=1)
  {
    month=gross/12;
  net=month*1;
    total=net+gross;
  }
  printf("\nTHE TOTAL SALARY OF THE EMPLOYEE IS: %d" ,total);
  getch();
  printf("\n");
  }
