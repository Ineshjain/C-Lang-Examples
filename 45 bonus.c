

# include <stdio.h>
main()
{
  int age;
  char gender,married;
  printf("ENTER YOU ARE MARRIED (Y/N): ");
  fflush(stdin);
  scanf("%c" ,&married);
  if (married =='Y' || married =='y')
    printf("YOUR BONOUS IS GRANTEED\n");

  else if(married =='N'|| married =='n')
  {
    printf("ENTER YOUR GENDER(M/F): ");
  fflush(stdin);
  scanf("%c" ,&gender);
    printf("ENTER YOUR AGE: ");
    fflush(stdin);
    scanf("%d" ,&age);


    if (gender =='M' || gender =='m')
    {
      if (age>=30)
        printf("YOUR BONOUS IS GRANTEED\n");
      else if (age<30)
        printf("YOU ARE NOT GRANTED BONUS\n");
    }


    else if(gender =='f' || gender =='F')
    {
      if (age>=25)
        printf("YOUR BONOUS IS GRANTEED\n");
      else if (age<25)
        printf("YOUR BONOUS IS NOT  GRANTED\n");
   }
   }
   }

