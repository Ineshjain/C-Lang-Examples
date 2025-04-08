# include <stdio.h>
void decresing(int n)
{
if(n==0)return;
  printf("%d\n",n);
 decresing(n-1);
   return;
}
int main()
{
  int a;
  printf("ENTER A NUMBER: ");
  scanf("%d",&a);
  decresing(a);
}
