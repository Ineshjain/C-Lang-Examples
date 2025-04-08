# include <stdio.h>
main()
{
  // REVERSE AP UPTO ALL TERMS ARE POSITIVE
  // 100,97,94,91...0
  int i,a;
  a=100;
  for(i=1;a>=0;i++)
    { printf("%d\t" ,a);
  a=a-3;
    }
  getch();
  printf("\n");
}
