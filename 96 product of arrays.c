# include <stdio.h>
main()
{
  int n,i,product=1;
  printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d" ,&n);
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++){
    product=product*a[i];
  }
    printf("\nTHE PRODUCT OF FOLLOWING IS :%d",product);
  getch();
  printf("\n");
}






