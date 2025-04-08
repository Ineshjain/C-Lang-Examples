# include <stdio.h>
int main()
{
  int i,j,totalpairs=0;
  int arr[8]={1,2,3,4,5,6,7,8};
for(i=0;i<8;i++)
{
    for(j=i+1;j<8;j++)
    {
      if(arr[i]+arr[j]==12)
      {
        totalpairs++;
        printf("(%d,%d)\n" ,arr[i],arr[j]);
    }
      }
}
  printf("%d\n" ,totalpairs);

}
