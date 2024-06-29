 # include <stdio.h>
main()
{
  int floor;
  floor=0;
  printf("\t\t\t\tLETS SEE WHICH VIEW YOU WILL GET\n");
  printf("ENTER YOUR FLOOR NUMBER: ");
  scanf("%d" ,&floor);
  if (floor<=50)
  {
     if (floor%2==0)
       printf("CONGRATS YOU AN OCEAN VIEW..");
    else
       printf("CONGRATS YOU AN FOREST VIEW..");
  }
  else
    printf("SORRY WE HAVE ONLY 50 FLOORS..");
  getch();
  printf("\n");
  }
