# include <stdio.h>
main()
{
  int sales,discount,amt;
  printf("ENTER THE SALES AMOUNT: ");
  scanf("%d" ,&sales);
  if (sales>=25000)
    discount=sales*25/100;
  else if (sales<25000 && sales>=20000)
    discount=sales*20/100;
  else if (sales<20000 && sales>=10000)
    discount=sales*10/100;
  else if (sales<10000 && sales>=5000)
    discount=sales*5/100;
  else
    discount=0;
  amt=sales-discount;
  printf("DISCOUNT: %d\n" ,discount);
  printf("AMOUNT TO BE PAID: %d\n" ,amt);
  getch();
  printf("\n");
}
