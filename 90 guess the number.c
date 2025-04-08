# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{


  // LETS GUESSE THE NUMBER!!
  srand (time(0));
  int guessed;
  int noofguesses=0;
  int randomnumber=(rand() %100)+1;
  do {
    printf("\nGUESSE THE NUMBER BETWEEN 1 TO  100..: ");
    scanf("%d" ,&guessed);
    if (guessed < randomnumber)
      printf("\nTHE NUMBER IS GREATER THAN %d \n" ,guessed);
    else if (guessed > randomnumber)
      printf("\nTHE NUMBER IS LESS THAN %d\n" ,guessed);
    else
     printf("\nYOU GUESSED THE WRITE NUMBER!!\n");
  }while(guessed != randomnumber);
  getch();
  printf("\n");
}



