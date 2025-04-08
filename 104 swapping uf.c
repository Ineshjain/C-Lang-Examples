# include <stdio.h>
void swap(int* a,int* b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  return;
}

int main()
{
int a,b;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&a);
  printf("ENTER ANOTHER NUMBER:");
  scanf("%d" ,&b);
  swap(&a,&b);
  printf("AFTER SWAPPING VALUE OF A IS:%d" ,a);
   printf("\nAFTER SWAPPING VALUE OF B IS:%d" ,b);
   printf("\n");
}
