# include <stdio.h>
int main()
{
  int i=2;
  int* ptr=&i;
  printf("THE ADDERESS OF I IS %p" ,&i);
  //%p is used to print the address of a variable in letters and numbers
  printf("\nTHE ADDERESS OF I IS %u" ,&i);
  //%u is used to print the address of a variables only in numbers
  printf("\nTHE VALUE OF I IS %d" , *ptr);

  printf("\n");
}
