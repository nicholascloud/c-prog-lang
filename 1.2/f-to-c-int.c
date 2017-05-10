#include <stdio.h>

/* print Fahreheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit of temperature table */
    step = 20;      /* temperature table increment */

    fahr = lower;
    while (fahr <= upper) {
        /* multiply by 5 first, then divide by 9, because
           integer division will truncate (discard) fractional
           remainders; thus 5/9 == 0 */
        celsius = (5 * (fahr - 32)) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}