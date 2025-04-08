# include<stdio.h>
# include<string.h>
# include<stdbool.h>
int main()
{
  typedef struct pokemon
  //declaring of structure
  {
  int hp;
  int attack;
  char name[15];
  }pokemon;

  typedef struct legendrypokemon
  //declaring of structure
    {
    pokemon normal;
    char ability[10];
    }legendrypokemon;

//nesting of strucutre
  legendrypokemon legend;

  legend.normal.hp=100;
  legend.normal.attack=12;
  strcpy(legend.normal.name,"pikachu");
  strcpy(legend.ability,"lightning");

  printf("\nLEGENDRY POKEMON\n");
  printf("name: %s\n",legend.normal.name);
  printf("ability:%s\n",legend.ability);
  printf("hp:%d\n",legend.normal.hp);
  printf("attack:%d\n",legend.normal.attack);

// normal structure
  pokemon charizard;
  charizard.hp=100;
  charizard.attack=12;
  strcpy(charizard.name,"charizard");

  printf("\nNORMAL POKEMON:");
  printf("\nname: %s\n",charizard.name);
  printf("hp:%d\n",charizard.hp);
  printf("attack:%d\n",charizard.attack);

  //double nesting of structurs

  typedef struct godpokeon
  //declaring of structure
  {
  legendrypokemon legend;
    int specialattack;
  }godpokemon;
  godpokemon god;

  strcpy(god.legend.normal.name,"rizard");
  strcpy(god.legend.ability,"fire");
  god.specialattack=100;
  god.legend.normal.hp=55;
  god.legend.normal.attack=92;

  printf("\nGOD POKEMON:");
  printf("\nname: %s\n",god.legend.normal.name);
  printf("ability: %s\n",god.legend.ability);
  printf("hp: %d\n",god.legend.normal.hp);
  printf("attack: %d\n",god.legend.normal.attack);
  printf("specialattack: %d\n",god.specialattack);

}

