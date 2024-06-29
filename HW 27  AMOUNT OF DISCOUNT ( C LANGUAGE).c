# include<stdio.h>
main()
{
  printf("\t\t\t\t\tLETS SEE HOW MUCH DISCOUNT YOU WILL GET\n");
    int bill,dis,disamt;
    bill=dis=disamt=0;
    printf("\nENTER  THE BILL AMMOUNT..: ");
    scanf("%d" ,&bill);

    if (bill>=25000)
      dis= bill*10/100;
  else
      if(bill<25000)
      dis=bill*5/100;

  disamt=bill-dis;
  printf("\nYOUR DISCOUNTED AMOUNT IS: %d" ,disamt);
  printf("\n\t\t\t\t\tTHANK YOU FOR SHOPPING WITH US!!");
  getch();
  return 0;
  }


