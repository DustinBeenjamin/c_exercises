#include <stdio.h>
#define UPPER_TEMP 300      /* An upper temperature in Fahrenheit */
#define LOWER_TEMP 0        /* A lower temperature in Fahrenheit */

int main(){

    //Print a table of fahrenheit and celcisus values (300F to 0F)
    for (float f_temp = UPPER_TEMP; f_temp >= LOWER_TEMP; f_temp -= 20) {
        printf("%3.2f\t%3.2f\n", f_temp, (5 * (f_temp - 32) / 9));
    }
    return 0;
}