#include <stdio.h>

/* print Fahreheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit of temperature table */
    step = 20;      /* temperature table increment */

    fahr = lower;
    /* exercise 1-3 print header */
    printf("%3s %6s\n", "F", "C");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        /* 3.0f = floating point (f), width 3, no decimal point displayed
           6.1f = floating point (f), width 6, one decimal point displayed */
        printf("%3.0f %6.1f\n", fahr, celsius);
        /* step cast to float */
        fahr = fahr + step;
    }
}