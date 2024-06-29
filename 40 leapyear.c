# include <stdio.h>
main()
{
  int year;
  year=0;
  printf("\t\t\t\tLETS CHECK THE LEAP YEAR!!");
  printf("\nENTER THE YEAR YOU WANT TO CHECK: ");
  scanf("%d" ,&year);
  if (year%4==0 && year%400==0)
  printf("ITS A LEAP YEAR");
  else
    printf("ITS NOT A LEAP YEAR");
  getch();
  printf("\n");
  }
