 # include <stdio.h>
//pascle triangle
//function for finding the factriol of a number
int factriol(int x)
{
  int fact=1;
  for(int i=1;i<=x;i++)
    fact*=i;
  return fact;
}
//function for finding the NCR
int combination(int n,int r)
{
  int
ncr=factriol(n)/(factriol(r)*factriol(n-r));
  return ncr;
}
int main()
{
  int i,j,n,icj;
  printf("ENTER A NUMBER(N): ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
    {
      printf("\n");
      int first=1;
      for(j=0;j<=i;j++)
        {
      printf("%d " ,first);
          //math logic applied..
          first=first*(i-j)/(j+1);
        }
    }
  printf("\n");
}

