# include <stdio.h>
void gretting(int n)
{
if(n==0)return;
  printf("GOOD MORNING\n");
 gretting(n-1);
   return;
}
int main()
{
  int a;
  printf("ENTER A NUMBER: ");
  scanf("%d",&a);
  gretting(a);
}
