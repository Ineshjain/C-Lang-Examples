# include <stdio.h>
main()
{
    printf("\t\t\t\tLETS READ A CHARACTER..");
  char a;
  printf("\nENTER A CHARECTER: ");
  fflush(stdin);
  scanf("%c" ,&a);
  if (a>=65 && a<=90)
    printf("%c IS IN UPPER CASE",a);
  else if (a>=97 && a<=122)
    printf("%c IS IN LOWER CASE",a);
else if (a>=48 && a<=57)
    printf("%c IS A DIGIT" ,a);
  else
  printf("%c IS A SPECIAL CHARECTER",a);
  getch();
  printf("\n");
}
