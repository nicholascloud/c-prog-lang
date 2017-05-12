/* exercise 1-6: verify that (getchar() != EOF) is 0 or 1 */
#include <stdio.h>

/* copy input to output, condensed */
int main()
{
    int c, result;

    c = getchar();
    result = (c != EOF);
    while (result) {
        printf("%3d ", result); // should be 1
        putchar(c);
        c = getchar();
        result = (c != EOF);
    }

    printf("%3d\n", result); // should be 0
}