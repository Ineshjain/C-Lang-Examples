# include <stdio.h>
int main()
{
  int n,r,nr,nfact,rfact,nrfact,i;
  n=r=nr=nfact=rfact=nrfact=1;
  printf("ENTER THE VALUE OF N: ");
  scanf("%d" ,&n);
  printf("ENTER THE VALUE OF R: ");
  scanf("%d" ,&r);
  for(int i=1;i<=n;i++)
    nfact=nfact*i;
  for(int i=1;i<=r;i++)
    rfact=rfact*i;
  for(i=1;i<=n-r;i++)
    nrfact=nrfact*i;
  int ncr = nfact/(rfact*nrfact);
  printf("THE VALUE OF NCR IS: %d" ,ncr);
}
