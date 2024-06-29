# include <stdio.h>
main()
{
  printf("\t\t\t\tLETS CALCULATE ELECTRICTY BILL!!\n\n");
  float e,bill;
  printf("ENTER THE NUMBER OF UNITS OF ELECTRICITY USED IN A MONTH: ");
  scanf("%f" ,&e);
  bill = 7.85*e;
  printf("\nTHE ELECTRICITY BILL IS %.3f\n\n" ,bill);

 getch();

}
