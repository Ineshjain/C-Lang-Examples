# include <stdio.h>
main()
{//factriol check
  int i,n,product;
  i=n=0;
  product=1;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for (i=1;i<=n;i++)
    {
    product =product*i;
    }
  printf("THE FACTRIOL OF %d IS %d" ,n,product);
  getch();
  printf("\n");
}

