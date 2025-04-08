# include <stdio.h>
main()
{
  // common multiple is 2
  long long int i,a,n;
  i=a=n=0;

  printf("ENTER THE NUMBER UPTO WHICH U WANT TO PRINT GP: ");
  scanf("%lld" ,&n);
  a=1;
  for(i=1;i<=n;i++)
    { printf("%lld\t" ,a);
  a=a*2;
    }
    getch();
    printf("\n");
}
