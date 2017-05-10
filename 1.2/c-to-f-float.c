/* exercise 1-4 */
#include <stdio.h>

/* print Fahreheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;
    float divisor = (5.0 / 9.0);

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit of temperature table */
    step = 20;      /* temperature table increment */

    celsius = lower;
    /* print header */
    printf("%3s %6s\n", "C", "F");
    while (celsius <= upper) {
        // celsius = (5.0 / 9.0) * (fahr - 32.0);
        fahr = 32.0 + (celsius / divisor);
        /* 3.0f = floating point (f), width 3, no decimal point displayed
           6.1f = floating point (f), width 6, one decimal point displayed */
        printf("%3.0f %6.1f\n", celsius, fahr);
        /* step cast to float */
        celsius = celsius + step;
    }
}