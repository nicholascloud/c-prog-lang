/* exercise 1-9: replace consecutive blanks with a single blank */
#include <stdio.h>

int main()
{
    int character;
    int blankCount;

    blankCount = 0;
    while ((character = getchar()) != EOF) {
         // haven't covered "else" or "||" yet
        if (character == ' ') {
            ++blankCount;
        }
        if (character != ' ') {
            blankCount = 0;
        }
        if (blankCount == 0) {
            putchar(character);
        }
        if (blankCount == 1) {
            putchar(character);
        }
    }
}