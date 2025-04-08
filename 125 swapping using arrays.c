# include <stdio.h>
void fun(int arr[])
{
  int temp=arr[0];
  arr[0]=arr[1];
  arr[1]=temp;
  return;

}
int main()
{
  int arr[2];
  printf("ENTER THE VALUE OF A: ");
  scanf("%d",&arr[0]);
  printf("ENTER THE VALUE OF B: ");
  scanf("%d",&arr[1]);
  printf("BEFORE SWAPPING THE VALUES OF A AND B ARE:\n %d %d\n",arr[0],arr[1]);
  fun(arr);
   printf("AFTER SWAPPING THE VALUES OF A AND B ARE:\n %d %d\n",arr[0],arr[1]);
  printf("\n");
}
