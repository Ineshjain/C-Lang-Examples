
# include <stdio.h>
# include <math.h>
main()
{
  printf("\t\t\t\t\tLETS CALCULATE THE VALUE OF (A+B)^2.." );
  float a,b,c;
  printf("\n\nENTER THE VALUES OF A AND B: ");
  scanf("%f%f" ,&a, &b);
  c=a*a+b*b+2*a*b;
  printf("\nTHE VALUE OF (A+B)^2 IS %.2f: " ,c);
  return 0;
  printf("\n");
  getch();
}

