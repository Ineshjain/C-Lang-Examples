# include<stdio.h>
                                   //bubble sorting
int main()
{
   int i,j,arr[5]={1,2,300,64,5};
  int n=5;
  for(i=0;i<n-1;i++)
    {
      int flag=0;
      for(j=0;j<n-1-i;j++)
        {
          if(arr[j]>arr[j+1])
          {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           flag=1;
          }
        }
        if(flag==0)
          break;
    }
  for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
}
