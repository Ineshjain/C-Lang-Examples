//BALANCE AMOUNT TO BE RETURNED TO THE CUSTOMER
# include <stdio.h>

main()
{
int a,b,amt;
a=0;
b=0;
amt=0;
printf("THE TOTAL BILL: ");
scanf("%d" ,&a);
printf("THE AMOUNT PAID BY CUSTOMER: ");
scanf("%d" ,&b);
amt=b - a;
printf("BALANCE AMOUNT TO BE RETURNED: %d" ,amt);
printf("\n");

}
