#include <stdio.h>

int main()
{
    int thisChar, newLineCount;

    newLineCount = 0;
    while ((thisChar = getchar()) != EOF) {
        // characters in single ticks are really integer
        // values in the computer's character set
        if (thisChar == '\n') {
            ++newLineCount;
        }
    }
    printf("%d\n", newLineCount);
}