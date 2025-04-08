# include <stdio.h>
main()
{
  int n,i,sum=0;
  printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d" ,&n);
  int a[n];
  for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n-1;i++){
    sum=sum+a[i];
  }
    printf("\nTHE SUM OF THE NUMBERS IS: %d",sum);
  getch();
  printf("\n");
}


