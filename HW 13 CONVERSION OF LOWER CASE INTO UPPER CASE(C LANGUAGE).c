# include <stdio.h>
main()
{
    char c1,c2;
    printf("ENTER A LETTER IN LOWER CASE: ");
    scanf("%c" ,&c1);
    c2=c1-32;//we did -32 bcoz difference btw upper and lower case character  is 32
    printf("THE ENTERED LETTER WAS IN UPPER CASE IS:%c" ,c2);
    printf("\n");
}
