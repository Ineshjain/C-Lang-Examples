#include <stdio.h>

int main()
{
    int number;
    number=0;
     printf("Enter a number: ");
    scanf("%d", &number);

 if (number > 0)
    printf("%d is a positive number.\n", number);
     else
        if (number == 0)
        printf("You entered 0 which is neither positive nor negative.\n");
     else
     printf("%d is a negative number.\n", number);

return 0;
    }
