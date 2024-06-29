# include <stdio.h>
main()
{
  int number;
  number=0;
  printf("ENTER A RANDOM NUMBER: ");
  scanf("%d" ,&number);
  if
    (number%3==0 && number%5==0)
  printf("%d IS DIVISIBLE BY 3 AND 5" ,number);
    else
    printf("%d IS NOT DIVISIBLE BY 3 AND 5" ,number);
    getch();
    printf("\n");

}
