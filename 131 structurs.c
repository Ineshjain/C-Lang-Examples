# include<stdio.h>
# include<string.h>
int main()
{
  struct pokemon // strucutre declaration
  {
  char name[10];
  int hp;
  int attack;
  };
  struct pokemon typea;
  strcpy(typea.name, "pikachu");
printf("ENTER THE HP OF THE POKEMON: ");
  scanf("%d",&typea.hp);
  typea.attack = 50;
  printf("%s\n%d\n%d",typea.name,typea.hp,typea.attack);
  struct pokemon typeb;
  typeb.hp = 100;
  strcpy(typeb.name ,"charizard");
  typeb.attack = 60;
  printf("\n\n%s\n%d\n%d",typeb.name,typeb.hp,typeb.attack);
}
