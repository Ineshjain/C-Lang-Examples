# include <stdio.h>
main()
{
  int item,qantity,price,total;
  printf("\t\t\t\tVEG KHANA RESTAURANT\n");
  printf("\n--------------------MENU--------------------\n");
  printf("1. IDDLI   Rs.25\n");
  printf("2. DOSA   Rs.50\n");
  printf("3. VADA   Rs.20\n");
  printf("4. UPMA   Rs.35\n");
  printf("5. EXIT  \n");
  printf("---------------------------------------------\n");
  printf("ENTER YOUR ORDER: ");
  scanf("%d" ,&item);
  printf("ENTER YOUR QUANTITY: ");
  scanf("%d" ,&qantity);
  switch (item)
    {
    case 1:total = qantity*25 ; break;
    case 2:total = qantity*50 ; break;
    case 3:total = qantity*20 ; break;
    case 4:total = qantity*35 ; break;
    case 5:printf("THANK YOU!!");
  default : printf("\a\n\t\t\t\t\t\t INVALID INPUT ");
    }
  printf("YOUR TOTAL BILL IS: %d" ,total);
  getch();
  printf("\n");
  }
