# include <stdio.h>
main()
{
  printf("\t\t\t\tLET SEE WHICH PEN IS MORE EXPENCIVE");
  int a,b,c;
  a=b=c=0;
  printf("\nENTER THE VALUE OF REYONALDS PEN: ");
  scanf("%d" ,&a);
  printf("ENTER THE VALUE OF MONTEX PEN: ");
  scanf("%d" ,&b);
  printf("ENTER THE VALUE OF PARKER PEN: ");
  scanf("%d" ,&c);
  if (a>b && a>c)
    printf("REYONLDS PEN IS THE MOST EXPENSIVE!!");
  else if(b>c)
    printf("MONTEX PEN IS THE MOST EXPENSIVE!!");
  else
    printf("\nPARKER PEN IS THE MOST EXPENSIVE!!");
  getch();
  printf("\n");
  }
