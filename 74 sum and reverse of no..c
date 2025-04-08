# include <stdio.h>
main()
{//the revrse and sum of a number
  int n,r,temp,sum;
  r=0;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  temp=n;//logic
  while(n>0)
    {r=r*10;
      r=r+n%10;
      n=n/10;
    }
  sum=temp+r;
  printf("THE REVERSE OF %d IS %d " ,temp,r);
  printf("/nTHE SUM IS %d" ,sum);
  getch();
printf("\n");
}

