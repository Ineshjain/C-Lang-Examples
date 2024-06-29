//PROGRAM TO READ PRICES OF IPHONE AND COVER AND CALCULATE TOTAL BILL
#include <stdio.h>
main()
{
    int a,b,amt;
    a=0;
    b=0;
    amt=0;

    printf("PRICE OF IPHONE!!: ");
    scanf("%d" ,&a);
    printf("PRICE OF MOBILE COVER!!: ");
    scanf("%d" ,&b);
    amt=a+b;
    printf("THE TOTAL OF YOUR ITEMS IS: %d" ,amt);
    printf("\n");

}
