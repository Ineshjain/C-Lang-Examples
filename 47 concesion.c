
# include <stdio.h>
main()
{
  int age;
  char gen;
  printf("WHATS UR AGE: ");
  scanf("%d" ,&age);
  if (age<0)
    printf("INVALID AGE");
  else if (age<=5)
    printf("YOUR TICKET IS FREE");
  else
  {
    printf("\nWHATS UR GENDER(M/F): ");
    fflush(stdin);
    scanf("%c" ,&gen);
    gen=toupper(gen);
    if (gen=='M' && age>=60)
      printf("\nYOU ARE ELIIGIBLE FOR CONCESSION..");
    else if (gen=='F' && age>=50)
      printf("\nYOU ARE ELIIGIBLE FOR CONCESSION..");
    else
      printf("\nYOU ARE NOT ELIIGIBLE FOR CONCESSION..");


 }
 getch();
 printf("\n");

}

