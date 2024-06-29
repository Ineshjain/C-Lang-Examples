# include <stdio.h>
main()
{
  int a,b,c;
  a=b=c=0;
  printf("\t\t\t\t\t LETS REVIEW THE MOVIE!!");
  printf("\nENTER THE RATING OF KALLI: ");
  scanf("%d" ,&a);
  printf("ENTER THE RATING OF IRON MAN: ");
  scanf("%d" ,&b);
  printf("ENTER THE RATING OF SPIDER MAN: ");
  scanf("%d" ,&c);
  if (a<10 || b<10 || c)
  if(a>b && a>c)
    printf("KALLKI IS THE BEST..");
  else if (b>c)
    printf("IRON MAN IS  THE BEST..");
  else
    printf("SPIDER MAN IS THE BEST..");
  getch();
  printf("\n");
}
