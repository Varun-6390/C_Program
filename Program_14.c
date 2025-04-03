// Age Calculator

#include <stdio.h>
#include <time.h>

int main()
{
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;
    int ageYears, ageMonths, ageDays;

    time_t t = time(NULL);
    struct tm *currentTime = localtime(&t);
    currentYear = currentTime->tm_year + 1900;
    currentMonth = currentTime->tm_mon + 1;
    currentDay = currentTime->tm_mday;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);
    printf("\nEnter your birth month:  ");
    scanf("%d", &birthMonth);
    printf("\nEnter your birthday: ");
    scanf("%d", &birthDay);

    if (birthYear > currentYear || birthMonth < 1 || birthMonth > 12 || birthDay < 1 || birthDay > 31)
    {
        printf("Invalid Date entered!");
        return 1;
    }

    ageYears = currentYear - birthYear;
    ageMonths = currentMonth - birthMonth;
    ageDays = currentDay - birthDay;

    if (birthDay == currentDay && birthMonth == currentMonth)
    {
        printf("\nHappy Birthday!");
    }
    if (birthDay == currentDay && birthMonth == currentMonth && birthYear == currentYear)
    {
        printf("You are born today");
    }

    if (ageDays < 0)
    {
        ageMonths--;
        ageDays = ageDays + 30;
    }

    if (ageMonths < 0)
    {
        ageYears--;
        ageMonths = ageMonths + 12;
    }

    if (ageYears < 0)
    {
        printf("Invalid birth date");
    }
    else if (ageYears > 150)
    {
        printf("Are you sure? this age seems unreal!");
    }
    else
    {
        printf("\nYou are %d years, %d months, %d days old.", ageYears, ageMonths, ageDays);
    }

    return 0;
}