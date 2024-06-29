# include <stdio.h>
main()
{
  float a,b,c,d;
  printf("ENTER THE FOUR NUMBERS:\n");
  fflush(stdin);
  scanf("%f%f%f%f" ,&a,&b,&c,&d);
  if (a>b && a>c && a>d)
    printf("%f IS THE LARGEST NUMBER",a);
     else if (b>c && b>d)
  printf("%f IS THE LARGEST NUMBER" ,b);
  else if(c>d)
  printf("%f IS THE LARGEST NUMBER" ,c);
    else
    printf("%f IS THE LARGEST NUMBER" ,d);
    getch();
    printf("\n");
}
