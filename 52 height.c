# include <stdio.h>
main()
{
  printf("t\t\t\t\tLETS SEE U ARE TALL OR NOT!!");
  float cm,feet;
  printf("\nENTER THE HEIGHT IN CM.: ");
    scanf("%f" ,&cm);
  feet=cm/30.48;
if (feet>=5.5)
  printf("TALL");
  else if  (feet<4.5)
    printf("SHORT");
  printf("\nTHE HEIGH IN FEET IS: %.2f " ,feet);
  getch();
  printf("\n");
}
