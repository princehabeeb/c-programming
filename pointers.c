#include <stdio.h>

int main(void)
{
    int age = 37;
    int *address = &age;
    printf("%u", *address);
}