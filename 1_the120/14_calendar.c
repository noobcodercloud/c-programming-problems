#include <stdio.h>

// Check leap year
int isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Days in a month
int getMonthDays(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return isLeap(year) ? 29 : 28;
}

// Get weekday of 1st day using simple counting logic
int getDayCode(int day, int month, int year) {
    int total_days = 0;

    // Count days for all previous years
    for (int y = 1900; y < year; y++) {
        total_days += isLeap(y) ? 366 : 365;
    }

    // Count days for previous months of current year
    for (int m = 1; m < month; m++) {
        total_days += getMonthDays(m, year);
    }

    // Add current day
    total_days += (day - 1);

    // 1900-01-01 was Monday, which is 0
    return total_days % 7;  
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    int days = getMonthDays(month, year);

    // dayCode: 0=Mon,1=Tue,...6=Sun
    int dayCode = getDayCode(1, month, year);

    // Convert to: 0=Sun,1=Mon,...6=Sat
    int startDay = (dayCode + 1) % 7;

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");

    // Print initial spaces
    for (int i = 0; i < startDay; i++) {
        printf("    ");
    }

    // Print all days
    for (int d = 1; d <= days; d++) {
        printf("%3d ", d);
        if ((d + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}