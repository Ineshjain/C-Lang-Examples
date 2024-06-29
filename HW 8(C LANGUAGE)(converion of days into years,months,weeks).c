 #include <stdio.h>

main()
{
 int years, months, weeks,days;
printf("ENTER THE NUMBER OF DAYS: ");
    scanf("%d" ,&days);
    years = days / 365; // Calculate years
    days = days % 365;  // Update days with remaining days

    months = days / 30; // Calculate months
    days = days % 30;   // Update days with remaining days

    weeks = days / 7;   // Calculate weeks
    days = days % 7;    // Update days with remaining days

    printf("Years: %d, Months: %d, Weeks: %d, Days: %d\n", years, months, weeks, days);
    getch();
}
