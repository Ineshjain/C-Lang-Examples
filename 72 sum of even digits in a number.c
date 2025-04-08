# include <stdio.h>
main()
{
  int i,ld,n;
  printf("ENTER A NUMBER: ");
    scanf("%d" ,&n);
 int sum=0;
while(n>0)
  {
  ld=n%10;
    if(ld%2==0)
       sum=sum+ld;
    n=n/10;
    i++;
  }
  printf("THE SUM OF THE DIGITS IS: %d" ,sum);
  getch();
  printf("\n");
}
