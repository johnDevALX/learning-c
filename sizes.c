#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;

    printf("The size an int is: %lu bytes.\n", (unsigned long)sizeof(i));
    printf("The size a double is: %lu bytes.\n", (unsigned long)sizeof(d));
    printf("The size a char is: %lu byte.\n", (unsigned long)sizeof(c));
}