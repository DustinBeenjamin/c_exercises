#include <stdio.h>

int main(){

    //temp refers to temperature
    int f_temp, c_temp;

    //print a table of fahrenheit and celsius equivalents. All operations are rounded to the nearest integer.
    f_temp = 0;
    while (f_temp <= 300) {
        c_temp = 5 * (f_temp - 32) / 9;;
        printf("%3d\t%3d\n", f_temp, c_temp);
        //adding the 3 after the % makes the output right justified
        f_temp += 20;
    }



}