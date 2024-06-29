// CONVERSION OF MIN INTO HRS
 # include <stdio.h>
int main()
{
 printf("\t\t\t LETS CONVERT MIN INTO HRS!!");
  int tm,h,m;
  tm=h=m=0;
  printf("\nENTER THE TIME TAKEN TO REACH HYD FROM SIGAPURE IN MINUTES: ");
  scanf("%d" ,&tm);
  // LOGIC
  h=tm/60;
  m=tm%60;
  printf("\nTHE TOTAL TIME IN HOURS IS %d HRS AND %d MINUTES",h,m);
  printf("\n");
  return 0;
  getch();
}
