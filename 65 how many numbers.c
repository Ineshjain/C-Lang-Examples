# include <stdio.h>
main()
{
  printf("\t\t\t\tLETS SEE HOW MANY DIGITS IN A NUMBER\n\n");
  long long int a,i;
  a=i=0;
  printf("ENTER ANY NUMBER: ");
  scanf("%lld" ,&a);
  while(a !=0)
    { a=a/10;
  i++;
    }
  printf("NUMBER OF DIGITS ARE: %lld" ,i);
  getch();
  printf("\n");
}
