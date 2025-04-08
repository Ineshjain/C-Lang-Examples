# include <stdio.h>
void change_to_thirtytimes(int* a);
void change_to_thirtytimes(int* a)
{
  *a=*a*30;
}
int main()
{
  int a=10;
  printf("THE VALUE OF A BEFORE CHANGE IS %d\n" ,a);
  change_to_thirtytimes(&a);
  printf("THE VALUE OF A AFTER CHANGE IS %d\n" ,a);
  printf("\n");
}
