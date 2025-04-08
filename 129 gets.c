 # include <stdio.h>
# include <string.h>
int main()
{
  char str[40];
  //scanf("%s" ,str);
  //only for single word
  gets(str);
  //entire sentence can be inputed
  printf("your inputed statement is: %s\n",str);
}
