# include <stdio.h>
main()
{
  int cube,i,n;
  printf("ENTER A NUMBER: ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
    {
      cube=i*i*i;
printf("THE NUMBER IS %d AND ITS CUBE IS %d\n" ,i,cube);
    }
  getch();
  printf("\n");
}
