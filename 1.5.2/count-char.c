#include <stdio.h>

int main()
{
    long count;

    count = 0;
    while (getchar() != EOF) {
        // for each keystroke will count the key
        // and the newline char
        ++count;
    }
    printf("%1d\n", count);
}