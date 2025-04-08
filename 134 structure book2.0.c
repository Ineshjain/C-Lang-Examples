# include<stdio.h>
# include<string.h>
int main()
  {
  typedef struct book
    {
    char title[20];
    int pages;
    float price;
    } book;//declearing the shortcut for struct book using typedef
    book a;
    strcpy(a.title,"c programming");
    a.pages=200;
    a.price=55.5;
    printf("%s\n%d\n%f\n" ,a.title,a.pages,a.price);

    book b;
    strcpy(b.title,"java script");
    b.pages=170;
    b.price=1200;
    printf("\n\n%s\n%d\n%f\n" ,b.title,b.pages,b.price);
  }
