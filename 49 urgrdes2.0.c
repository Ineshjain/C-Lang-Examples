
#include <stdio.h>

int main() {
  int a, b, c, total, avg;

  printf("ENTER THE MARKS OF C LANG.: ");
  scanf("%d", &a);

  printf("ENTER THE MARKS OF CPP LANG.: ");
  scanf("%d", &b);

  printf("ENTER THE MARKS OF JAVA LANG.: ");
  scanf("%d", &c);

  if(a > 100 || b > 100 || c > 100)
    printf("PLEASE ENTER PROPER MARKS");
  else if (a >= 30 && a <= 100 && b >= 30 && b <= 100 && c >= 30 && c <= 100)
    {
    total = a + b + c;
    avg = total / 3;
    printf("\nTOTAL MARKS ARE: %d\n", total);
    printf("AVERAGE MARKS ARE: %d\n", avg);

    if (avg > 90 && avg <= 100)
      printf("YOU GOT A+ GRADE\n");
    else if (avg <= 90 && avg >= 80)
      printf("YOU GOT A GRADE\n");
    else if (avg < 80 && avg >= 70)
      printf("YOU GOT B GRADE\n");
    else if (avg < 70 && avg >= 60)
      printf("YOU GOT C GRADE\n");
    else if (avg < 60 && avg >= 50)
      printf("YOU GOT D GRADE\n");
  }
  else

    printf("YOU ARE FAILED SO NO GRADES..\n");


  return 0;
}
