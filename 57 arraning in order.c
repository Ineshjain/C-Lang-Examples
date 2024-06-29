# include <stdio.h>
swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}
main()
{
  int a,b,c;
  char order;
  printf("ENTER ANY THREE NUMBERS: ");
  scanf("%d %d %d" ,&a,&b,&c);
  printf("ENTER THE ORDER (A/D): ");
  fflush(stdin);
  scanf("%c" ,order);
  order=toupper(order);
  if (order =='A')
  {
    if (a<b)
      swap(&a,&b);
    if (a<c)
      swap(&a,&c);
    if (b<c)
      swap(&b,&c);
    printf("THE NUMBERS IN ASCENDING ORDER ARE: %d < %d < %d");
  }
  else if (order =='D')
  {
    if (a>b)
      swap(&a,&b);
    if (a>c)
      swap(&a,&c);
    if (b>c)
      swap(&b,&c);
    printf("THE NUMBERS IN DESCENDING ORDER ARE: %d > %d > %d");
  }
  else
    printf("INVALID ORDER");
}
