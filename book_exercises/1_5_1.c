#include <stdio.h>

int main(){

    // //SOLUTION 1
    // int c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }

    //SOLUTION 2
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    //The only way for this to end is for a character to be EOF, but that is only possible if the user inputs CNTL + C, which would end the program anyways
}