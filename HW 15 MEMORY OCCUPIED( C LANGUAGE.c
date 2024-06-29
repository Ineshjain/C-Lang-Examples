# include <stdio.h>
main()
{
  char name[20],gender,place[20];
  printf("ENTER YOUR FULL NAME: ");
  scanf("%[^\n]" ,&name);
  fflush(stdin);
  printf(" \nENTER THE GENDER(M/F): ");
  scanf("%c" ,&gender);
  fflush(stdin);
  printf("\nENTER THE NATIVE PLACE: ");
  scanf("%[^\n]" ,&place);
  fflush(stdin);
  printf("\nthe size of full name is %d",sizeof(name));
  printf("\nthe size of gender is %d" ,sizeof(gender));
  printf("\nthe size of place is %d" ,sizeof(place));

  }










