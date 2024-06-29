# include <stdio.h>
main()
{
  printf("\t\t\t\tLETS SEE IF YOU ARE ELGIBLE TO VOTE OR NOT\n");
  int age;
  age=0;
  printf("ENTER YOUR AGE: ");
  scanf("%d" , &age);
  if (age>=18 && age<=110)
  {
    printf("\nYOU ARE ELIGIBLE TO VOTE\n");
  }
 if (age<18)
  {
    printf("OPPS!! YOU ARE NOT ELIGIBLE TO VOTE\n");
  }
  if (age>110)
    printf("ENTER A CORRECT AGE!!");
  printf("\nTHANK YOU:)\n");
  getch();
  return 0;
}
