# include<stdio.h>
# include<string.h>
int main()
{
  typedef struct cricketer
  {
    char name[20];
    int age;
   int no_of_test;
   float avg_runs;
  }cricketer;
  cricketer arr[3];
  for(int i=0;i<3;i++)
    {
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].no_of_test);
    scanf("%f",&arr[i].avg_runs);
    }
  for(int j=0;j<3;j++)
    {
      printf("NAME =\n%s\n",arr[j].name);
      printf("AGE =%d\n",arr[j].age);
      printf("NO_OF_TEST =%d\n",arr[j].no_of_test);
      printf("AVG_RUNS =%f\n",arr[j].avg_runs);
    }
}
