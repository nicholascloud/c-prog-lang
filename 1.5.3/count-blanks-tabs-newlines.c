/* exercise 1-8: count blanks, tabs, and newlines */
#include <stdio.h>

int main()
{
    int thisChar, count;

    count = 0;
    while ((thisChar = getchar()) != EOF) {
        // characters in single ticks are really integer
        // values in the computer's character set
        if (thisChar == '\n') { // newline
            ++count;
        }
        if (thisChar == '\t') { // tab
            ++count;
        }
        if (thisChar == ' ') { // space
            ++count;
        }
    }

    printf("%d\n", count);
}