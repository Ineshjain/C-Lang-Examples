// SWAP THE VALUES OF VARIABLES OF A AND B WITHOUT USING 3RD VARIABLE
# include <stdio.h>
main()
{
  printf("\t\t\t\tLETS SWAP THE VALUES OF A AND B!!");
int a,b;
 a = 0;
 b = 0;
 printf("\n");
    printf("\nENTER THE VALUE OF A: ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B: ");
    scanf("%d",&b);
// LOGIC FOR SWAPING VALUES
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nA IS = %d",a);
    printf("\nB IS = %d",b);
    printf("\n");

    printf("\nHOPE YOU ENJOYED SWAPING THE VALUES:)");

    getch();
    }
