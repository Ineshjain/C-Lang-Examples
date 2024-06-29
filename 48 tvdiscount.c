# include <stdio.h>
main()
{
  int amt,bill,days,dis;
  char mode;
  printf("\t\t\t\t\tLETS SEE YOUR DISCOUNT!!");
  printf("\nENTER THE AMOUNT OF THE SMART TV: ");
  fflush(stdin);
  scanf("%d" ,&amt);
  printf("ARE YOU PAYING BY CASH (Y/N): ");
  fflush(stdin);
    scanf("%c" ,&mode);
  mode =toupper(mode);
  if (mode =='Y')
    bill=amt-amt*0.25;
  else if (mode =='N')
  {
    printf("WHEN WILL YOU PAY (1-7): ");
    scanf("%d" ,&days);
    if (days<=7)
      bill=amt-amt*0.15;
    else
      bill=amt+amt*0.1;
   }
   else
    printf("ENTER THE CORRECT OPTION");
  printf("\nYOUR FINAL AMOUNT IS: %d\n" ,bill);
  printf("\t\t\t\t\tTHANK YOU :) ");
  getch();
  printf("\n");
}
