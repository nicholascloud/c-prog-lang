/* exercise 1-7: write a program to print the value of EOF */
#include <stdio.h>

/* copy input to output, condensed */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("EOF: %d", c); // -1
}