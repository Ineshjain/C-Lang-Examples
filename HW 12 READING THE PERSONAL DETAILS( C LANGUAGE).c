# include <stdio.h>
main()
{
  char name[20],gender[20],place[20];
  printf("ENTER YOUR FULL NAME: ");
  scanf("%[^\n]" ,&name);
  fflush(stdin);
  printf(" \nENTER THE GENDER(M/F): ");
  scanf("%[^\n]" ,&gender);
  fflush(stdin);
  printf("\nENTER THE NATIVE PLACE: ");
  scanf("%[^\n]" ,&place);
  printf("\n%s - %s - %s" ,name,gender,place);
  printf("\n");
  getch();

  }


