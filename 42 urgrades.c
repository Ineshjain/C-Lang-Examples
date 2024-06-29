# include <stdio.h>
main()
{
  printf("\t\t\t\tLETS SEE UR RESULT");
  int a,b,c,total,avg;
  printf("\nENTER THE MARKS OF ENGLISH: ");
  scanf("%d" ,&a);
  printf("ENTER THE MARKS OF MATHS: ");
  scanf("%d" ,&b);
  printf("ENTER THE MARKS OF SCIENCE: ");
  scanf("%d" ,&c);
  total=a+b+c;
  if (total<=300)
  { avg=total/3;
  printf("\nYOUR TOTAL MARKS ARE: %d\n" ,total);
  printf("YOUR PERCENTAGE IS :%d%%\n" ,avg);
  if (avg>90 && avg<=100)
    printf("YOU GOT A+ GRADE");
 else if (avg<=90 && avg>=80)
    printf("YOU GOT A GRADE");
  else if (avg<80 && avg>=70)
    printf("YOU GOT B GRADE");
  else if (avg<70 && avg>=60)
    printf("YOU GOT C GRADE");
  else if (avg<60 && avg>=50)
    printf("YOU FOT D GRADE");
  else
    printf("YOU GOT F GRADE");
}
  else
    {
        printf("YOUR TOTAL IS SOO HIGH!!");
    printf("\a");
    }
    getch();
    printf("\n");
}
