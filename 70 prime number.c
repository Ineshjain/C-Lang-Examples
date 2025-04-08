# include <stdio.h>
main()
{
  int i,a,n;
  i=a=0;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=2;i<n-1;i++)
     {
         if(n%i==0)
     { a=1;
  break;
    }
    }
  if(n==1)
    printf("THE NUMBER IS NOT PRIME NOR COMPOSITE");
  if(a==0)
    printf("THE NUMBER IS PRIME");
  else
    printf("THE NUMBER IS COMPOSITE");
  getch();
  printf("\n");
}
