
#include <stdio.h>
#include <conio.h>

int main()
{
    int days, years, weeks, remaining_days;



    printf("Enter total days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    remaining_days = days % 7;

    printf("\nYears = %d", years);
    printf("\nWeeks = %d", weeks);
    printf("\nRemaining Days = %d", remaining_days);

    return 0;
}
