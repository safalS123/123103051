#include <stdio.h>

void date(int day, int month, int year)
{
    printf("%d", day);

    switch (day)
    {
    case 1:
    case 21:
    case 31:
        printf("st, ");
        break;
    case 2:
    case 22:
        printf("nd, ");
        break;
    case 3:
    case 23:
        printf("rd, ");
        break;
    default:
        printf("th, ");
        break;
    }

    switch (month)
    {
    case 1:
        printf("Jan, ");
        break;
    case 2:
        printf("Feb, ");
        break;
    case 3:
        printf("Mar, ");
        break;
    case 4:
        printf("April, ");
        break;
    case 5:
        printf("May, ");
        break;
    case 6:
        printf("Jun, ");
        break;
    case 7:
        printf("Jul, ");
        break;
    case 8:
        printf("Aug, ");
        break;
    case 9:
        printf("Sep, ");
        break;
    case 10:
        printf("Oct, ");
        break;
    case 11:
        printf("Nov, ");
        break;
    case 12:
        printf("Dec, ");
        break;
    default:
        printf("Invalid Month, ");
        break;
    }

    printf("%d", year);
}

int leap_year(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int days_in_month(int month, int year)
{
    int leapyear = leap_year(year);

    if (leapyear == 1 && month == 2)
    {
        return 29;
    }
    else if (month == 2)
    {
        return 28;
    }
    else if (month % 2 == 0)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

int main()
{
    int day, month, year;
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    int d2add;
    printf("Enter the number of days to add: ");
    scanf("%d", &d2add);

    while (d2add > 0)
    {
        day++;
        if (day > days_in_month(month, year))
        {
            day = 1;
            month++;
        }
        if (month > 12)
        {
            month = 1;
            year++;
        }
        d2add--;
    }

    printf("New date is: ");
    date(day, month, year);

    return 0;
}
