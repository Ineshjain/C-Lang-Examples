# include <stdio.h>
main()
{
  int units,amt;
  char size;
  printf("\t\t\t\t\tLETS CALCULATE ELECTRICITY BILL..\n");
  printf("ENTER THE NO.OF UNITS CONSUMED: ");
  scanf("%d" ,&units);
  printf("ENTER THE PLACE WHERE USED COMMERCIAL OR DOMESTIC: ");
  fflush(stdin);
  scanf("%c" ,&size);
  size=toupper(size);
  if(size=='C')
  {
    if(units<=100)
      amt=150;

    else if(units>100 && units<=200)
      amt=units*2.50;
    else if(units>200 && units<=300)
      amt=units*4.50;
    else if(units>300)
      amt=units*7.50;
  }
  else if (size=='D')
  {
    if(units<=100)
      amt=100;

    else if(units>100 && units<=200)
      amt=units*1.50;
    else if(units>200 && units<=300)
      amt=units*3.00;
    else if(units>300)
      amt=units*5.00;
  }
    else
      printf("INVALID INPUT");
  printf("THE AMOUNT TO BE PAID IS: %d" ,amt);
  printf("\t\t\t\t\t\nTHANK YOU...");
  getch();
  printf("\n");

}
