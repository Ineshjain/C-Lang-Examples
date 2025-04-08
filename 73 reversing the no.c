# include <stdio.h>
main()
{
  int n,r,temp;
  r=0;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  temp=n;
  while(n>0)
    {r=r*10;
      r=r+n%10;
      n=n/10;
    }
  printf("THE REVERSE OF %d IS %d " ,temp,r);
  getch();
printf("\n");
}

