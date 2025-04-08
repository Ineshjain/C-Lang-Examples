# include<stdio.h>
# include<string.h>
int main()
{
  typedef struct pokemon
  {
    char name[20];
   int hp;
  int speed;
  }po;
  po arr[3];//array of structure
  // stored as arr[0],arr[1],arr[2]
 strcpy(arr[0].name,"pickachu");
  arr[0].hp=54;
  arr[0].speed=90;

  strcpy(arr[1].name,"raichu");
  arr[1].hp=99;
  arr[1].speed=33;

  strcpy(arr[2].name,"pickachu");
  arr[2].hp=22;
  arr[2].speed=92;
  for(int i=0;i<3;i++)
    {
printf("name:%s\nhp:%d\nspeed:%d\n",arr[i].name,arr[i].hp,arr[i].speed);
  printf("\n");
    }
}
