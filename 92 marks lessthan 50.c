# include <stdio.h>
main()
{
  int marks[10];
  int i,n;
  i=n=0;

  for (i=0;i<10;i++)
    {
      printf("ENTER THE MARKS OF THE STUDENT %d: " ,i+1);
      scanf("%d",&marks[i]);

      if (marks[i]<50)
        printf("%d\t" ,marks[i]);
}
}


