// PROGRAM FOR CALCULATING TOTAL , AVG.
# include <stdio.h>
main()
{
    printf("\t\t\t\t\t\t ENTER YOUR MARKS!!");
    float a,b,c,d,e,total,avg;
    a=b=c=d=e=total=avg=0;
    printf("\n\nMARKS OBTAINED IN ENGLISH: ");
    scanf("%f" ,&a);
    printf("MARKS OBTAINED IN SANSKRITH: ");
    scanf("%f" ,&b);
    printf("MARKS OBTAINED IN MATHS: ");
    scanf("%f" ,&c);
    printf("MARKS OBTAINED IN PHYSICS: ");
    scanf("%f" ,&d);
    printf("MARKS OBTAINED IN CHEMISTRY: ");
    scanf("%f" ,&e);
    total= a+b+c+d+e;
   printf("\nTOTAL MARKS: %.2f",total);
   avg=total/5;
   printf("\nPERCENTAGE GAINED: %.2f %%",avg);
   getch();

//.2f is used to get ans in two decimals
}
