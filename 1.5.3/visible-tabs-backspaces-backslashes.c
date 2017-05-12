/* exercise 1-10: make tabs , backspaces, and backslashes visible */
#include <stdio.h>

int main()
{
    int character;
    int match;

    match = 0;
    while ((character = getchar()) != EOF) {
        // haven't covered "else" or "continue" yet
        if (character == '\t') { // tab
            putchar('\\');
            putchar('t');
            match = 1;
        }
        if (character == '\b') { // backspace
            putchar('\\');
            putchar('b');
            match = 1;
        }
        if (character == '\\') { // backslash
            putchar('\\');
            putchar('\\');
            match = 1;
        }
        if (match == 0) {
            putchar(character);
        }
        match = 0;
    }
}