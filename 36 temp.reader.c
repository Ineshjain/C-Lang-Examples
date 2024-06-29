# include <stdio.h>
main()
{
  int temp;
  temp=0;
  printf("Enter the temperature in celcius: " );
  scanf("%d",&temp);
  if (temp<0)
    printf("Its freezing weather!!");
  if (temp>0 && temp<10)
    printf("ITS VERY COLD WEATHER!!");
  if (temp<20 && temp>10)
    printf("ITS COLD WEATHER!!");
  if (temp<30 && temp>20)
    printf("ITS NORMAL WEATHER!!");
  if (temp<40 && temp>30)
    printf("ITS HOT WEATHER!!");
  if (temp>40)
    printf("ITS VERY HOT WEATHER!!");
  getch();
    printf("\n");
}
