# include <stdio.h>
# include <math.h>
main()
{
    printf("\t\t\t\t\t\tLETS SPLIT THE BILL!!");
float bill,tip,total,share;
  bill=tip=total=share=0;
  int frnds;
  frnds=0;
  printf("\nENTER THE BILL AMOUNT: ");
  scanf("%f" ,&bill);
  fflush(stdin);
  printf("\nENTER THE TIP PERSENTAG(%%5 OR %%10): ");
  scanf("%f" ,&tip);
  fflush(stdin);


  if (tip != 5 && tip != 10)
  {
    printf("\nINVALID TIP PERCENTAGE");
    printf("\a");
  }



  if (tip == 5)
  {
       printf("\nENTER THE NUMBER OF FRIENDS: ");
  scanf("%d", &frnds);
  fflush(stdin);

    total = bill + (bill * 0.05);
    share = total / frnds;//logic

     printf("THE TOTAL BILL IS: %.2f\n", total);
  printf("THE TIP PERCENTAGE IS: %.2f\n", tip);
  printf("THE TOTAL SHARE PER PERSON IS: %.2f\n", share);
    }


  if (tip == 10)
  {
     printf("\nENTER THE NUMBER OF FRIENDS: ");
  scanf("%d", &frnds);
  fflush(stdin);

    total = bill + (bill * 0.10);
    share = total / frnds;//logic

     printf("THE TOTAL BILL IS: %.2f\n", total);
  printf("THE TIP PERCENTAGE IS: %.2f\n", tip);
  printf("THE TOTAL SHARE PER PERSON IS: %.2f\n", share);
  }

  printf("\t\t\t\t\t   THANK YOU:)\n");
getch();
printf("\n\n");


}
