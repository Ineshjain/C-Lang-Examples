#include <stdio.h>

int main()
{
    printf("\t\t\t\t\tWHICH IS MORE COSTLIER!!");
    float samsung_price, apple_price;
printf("\nEnter the price of Samsung mobile: ");
scanf("%f", &samsung_price);

printf("Enter the price of Apple mobile: ");
scanf("%f", &apple_price);

     if (samsung_price > apple_price)
    {
        printf("Samsung mobile is costlier than Apple mobile.\n");
    }
      else if (samsung_price < apple_price)
    {
        printf("Apple mobile is costlier than Samsung mobile.\n");
    }
else
    {
        printf("Samsung and Apple mobile are of the same price.\n");
    }

    return 0;
    getch();
}
