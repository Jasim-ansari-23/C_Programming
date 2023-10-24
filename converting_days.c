#include <stdio.h>

int main()
{
    int days, years, weeks, months, remaining_Days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    months = days / 30;
    remaining_Days = days % 365;
    weeks = remaining_Days / 7;
    remaining_Days = remaining_Days % 7;

    printf("%d days is equal to %d months and, %d years, %d weeks, and %d days\n", days, months, years, weeks, remaining_Days);
    return 0;
}
