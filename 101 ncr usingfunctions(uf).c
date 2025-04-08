# include <stdio.h>
int factriol(int x){
  int fact=1;
  for(int i=1;i<=x;i++)
    fact=fact*i;
  return fact;
}

int main()
{
  int n,r,nr,nfact,rfact,nrfact,i;
  n=r=nr=nfact=rfact=nrfact=1;
  printf("ENTER THE VALUE OF N: ");
  scanf("%d" ,&n);
  printf("ENTER THE VALUE OF R: ");
  scanf("%d" ,&r);
  // nfact=factriol(n);
 // rfact=factriol(r);
 // nrfact=factriol(nr);
  int ncr = factriol(n)/(factriol(r)*factriol(n-r));
  printf("THE NCR IS: %d" ,ncr);
  getch();
  printf("\n");
}
