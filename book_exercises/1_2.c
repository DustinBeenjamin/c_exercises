#include <stdio.h>
#define UPPER_TEMP 300
#define LOWER_TEMP 0

int main(){

    //Print a table of fahrenheit and celcisus values (300F to 0F)
    float f_temp, c_temp;
    f_temp = UPPER_TEMP;

    while (f_temp >= LOWER_TEMP) {
        c_temp = 5 * (f_temp - 32) / 9;
        printf("%3.1f\t%3.1f\n", f_temp, c_temp);
        f_temp -= 20;
    }

    return 0;



}