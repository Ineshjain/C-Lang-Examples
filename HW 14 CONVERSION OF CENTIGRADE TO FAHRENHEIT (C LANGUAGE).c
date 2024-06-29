# include <stdio.h>
main()
{
float cen,fah;
printf("ENTER THE TEMPERATURE IN CENTIGRADE SCALE: ");
scanf("%f" ,&cen);
fah=9/5.0*cen+32;//logic for convert fah into cen
printf("\nTHE TEMPERATRE IN FAHREHEIT SCALE:%f",fah);


}
