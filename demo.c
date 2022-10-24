#include <stdio.h>

int main(void)
{
    char f,j,e;
    int age;

    printf("Enter your initials, followed by your name: ");
    scanf("%c %c %c %d", &f, &j, &e, &age);
    printf("My initials are: %c%c%c and my age is %d.\n", f,j,e,age);
    return(0);
}