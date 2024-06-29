# include <stdio.h>
main()
{
  char colour;
  printf("ENTER THE COLOUR OF THE TRAFIC LIGHT (R/Y/G): ");
  scanf("%c" ,&colour);
  colour=toupper(colour);
  switch(colour)
    {
    case 'R':printf("STOP THE VHEICLE\n");break;
    case 'Y':printf("YELLOW LIGHT PLEASE IS WAIT..\n");break;
    case 'G':printf("GREEN LIGHT PLEASE GO!!\n");break;
      default:printf("INVALID COLOUR PLEASE GO\n");
  }
  getch();
  printf("\n");
}
