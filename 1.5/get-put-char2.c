#include <stdio.h>

/* copy input to output, condensed */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}