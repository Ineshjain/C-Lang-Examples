# include <stdio.h>
int main()
{
  int a=25;
  int* x=&a;//int ka address store kartha hai
  int** y= &x;//int* ka adress store kar tha hai
  printf("%d\n",a);
  printf("%p\n",&a);//address of a
   printf("%p\n",&x);//adress of x
  printf("%d\n",**y);
return 0;
}
