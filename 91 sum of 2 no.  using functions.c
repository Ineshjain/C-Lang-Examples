# include <stdio.h>
// function prototype
int sum (int,int);
int sum (int a,int b)//here a and b are pointers
{
  //  to print the sum of a and b
return a+b;
}
int  main()
{
  int a=10;//here a and b are aurgument
  int b=20;
  int c=sum(a,b);// function call
  printf("%d" ,c);
}



