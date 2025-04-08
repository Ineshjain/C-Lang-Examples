# include <stdio.h>
main()
{
  int add[5] = {1,2,2,6,5};
  printf("%p\n" ,&add[0]);//%p is used to print the address of the array
  printf("%p\n" ,&add[1]);
  printf("%p\n" ,&add[2]);
  printf("%p\n" ,&add[3]);
  printf("%p\n" ,&add[4]);
}


