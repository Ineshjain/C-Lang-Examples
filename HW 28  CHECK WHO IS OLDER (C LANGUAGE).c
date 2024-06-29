# include <stdio.h>
main()
{
  int age1, age2;
  age1=age2=0;
  char name1[50], name2[50];

  printf("\t\t\t\tLETS SEE WHO IS OLDER");

  printf("\n\nENTER THE NAME OF THE FIRST PERSON..: ");
  fflush(stdin);
  scanf("%[^\n]", name1);

  printf("ENTER THE AGE OF THE %s: ", name1);
  scanf("%d", &age1);

  printf("ENTER THE NAME OF THE SECOND PERSON..: ");
  fflush(stdin);
  scanf("%[^\n]", &name2);

  printf("ENTER THE AGE OF THE %s: ", name2);
  scanf("%d", &age2);

  if(age1>age2)
    printf("\n%s OLDER THAN %s!!" , name1, name2);
  else
    if (age1<age2)
    printf("\n%s OLDER THAN %s!!" , name2, name1);
    getch();
    printf("\n");

}
