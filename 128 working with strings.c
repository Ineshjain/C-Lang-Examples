# include <stdio.h>
//\0 is used as a mark point it does not print itself and it is the last character of the string its ascii value is 0
// printing the string using arrays
int main()
{
  int i;
  char arr[]= "Hello World\0";
  for(i=0;arr[i]!='\0';i++)
    printf("%c" ,arr[i]);
    printf("\n");
}
