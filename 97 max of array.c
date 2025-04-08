# include <stdio.h>
main()
{
  int i;
int arr[7] ={1,4,2,8,19,5,12};
  int max = arr[0];
  for(i=1;i<7;i++)
  {
  if (max<arr[i])
  {
    max=arr[i];
  }
  }
  printf("THE MAXIMUM NUMBER IS :%d" ,max);

}






