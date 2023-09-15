#include <stdio.h>

typedef enum
{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
} WEEKDAY;

int main(void)
{
    WEEKDAY day = monday;
    if (day == monday)
    {
        printf("it is monday");
    }
    else
    {
        printf("it is not friday");
    }
}