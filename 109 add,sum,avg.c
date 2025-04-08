# include <stdio.h>
int* sum(int a, int b)
{
int s=a+b;
int* ptr1=&s;
  printf("THE SUM IS %d",s);
  printf("\nTHE ADDRESS OF SUM IS %d",ptr1);
return ptr1;
 }
float* avg(int a,int b)
{
  float avg=(a+b)/2.0;
  float* ptr2=&avg;
  printf("\n\nTHE AVG OF TWO NUMBERS IS %f" ,avg);
  printf("\nTHE ADDRESS IS %d",ptr2);
  return ptr2;
}
int main()
{
int x=4;
int y=3;
sum(x,y);
avg(x,y);
printf("\n");
}

