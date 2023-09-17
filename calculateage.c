#include <stdio.h>

int calculateAge(int year)
{
    const int current_year = 2023;
    return current_year - year;
}

int main(void)
{
    printf("%u", calculateAge(1999));
}