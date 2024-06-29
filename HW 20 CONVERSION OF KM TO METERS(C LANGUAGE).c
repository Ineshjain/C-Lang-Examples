# include <stdio.h>
main()
{
  printf("\t\t\t\t\tLETS CONVERT KM TO METERS\n\n");
  float a,distance;
  printf("ENTER THE DISTANCE FROM A TO B IN KILOMETERS: ");
  scanf("%f" ,&a);
  distance = a*1000;
  printf("\nTHE DISTANCE IN METERS IS: %f\n" ,distance);
  getch();
}
