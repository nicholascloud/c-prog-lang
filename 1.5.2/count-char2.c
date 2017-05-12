#include <stdio.h>

int main()
{
    double count;

    for (count = 0; getchar() != EOF; ++count)
        ;

    // suppress decimal point
    printf("%.0f\n", count);
}