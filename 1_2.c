#include <stdio.h>

int main(){

    //temp refers to temperature
    float f_temp, c_temp;

    //print a table of fahrenheit and celsius equivalents.
    f_temp = 0;
    while (f_temp <= 300) {
        c_temp = 5 * (f_temp - 32) / 9;;
        printf("%3.1f\t%3.1f\n", f_temp, c_temp);
        f_temp += 20;
    }



}