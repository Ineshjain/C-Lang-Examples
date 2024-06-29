# include <stdio.h>
main()
{
  int a,b,c;
  a=b=c=0;
  printf("\t\t\t\t\tLETS ARRANGE IN ACENDING ORDER!!");
  printf("\nENTER THE NUMBERS:\n");
  scanf("%d%d%d" , &a,&b,&c);
  if(a>b && a>c && b>c)
    printf("THE NUMBERS IN ACENDING ORDER ARE: %d < %d < %d" , c, b, a);
  else
    if(a>b && a>c  && c>b)
      printf("THE NUMBERS IN ACENDING ORDER ARE: %d < %d < %d" ,b, c, a);
  else
    if(b>a && b>c && a>c)
        printf("THE NUMBERS IN ACENDING ORDER ARE: %d < %d < %d" ,c, a, b);
  else
    if(b>a && b>c && c>a)
        printf("THE NUMBERS IN ACENDING ORDER ARE: %d < %d < %d" ,a, c, b);
  else
    if(c>a && c>b && a>b)
        printf("THE NUMBERS IN ACENDING ORDER ARE: %d < %d < %d" ,b, a, c);
  else if(c>a && c>b && b>a)
        printf("THE NUMBER IN ACENDING ORDER ARE: %d < %d < %d" ,a, b, c);
        getch();
        printf("\n");
  }

