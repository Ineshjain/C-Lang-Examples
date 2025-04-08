# include<stdio.h>
# include<string.h>
int main()
{
  struct book{
  char name[50];
  int pages;
  float price;
  };
  struct book b1;
  printf("ENTER THE NAME OF THE BOOK:");
  scanf("%s",b1.name);
  printf("ENTER THE NUMBER OF PAGES:");
  scanf("%d",&b1.pages);
  printf("ENTER THE PRICE OF THE BOOK:");
  scanf("%f" ,&b1.price);
}
