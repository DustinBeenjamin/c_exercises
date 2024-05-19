#include <stdio.h>
#define NUM_NUMERIC_CHARACTERS 10

//Count whitspace characters, the occurances of each digit, and all other characters (of a single line)
int main(){

    int numeric_occurances[NUM_NUMERIC_CHARACTERS];
    for (int i = 0; i < NUM_NUMERIC_CHARACTERS; i++) {
        numeric_occurances[i] = 0;
    }

    int num_whitespace, num_other, c;
    num_whitespace = num_other = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            numeric_occurances[c - '0']++;
        } else if (c == ' ' || c == '\t' || c == '\n') {
            num_whitespace++;
        } else {
            num_other++;
        }
    }


    for (int i = 0; i < NUM_NUMERIC_CHARACTERS; i++) {
        printf("%d: %d\n", i, numeric_occurances[i]);
    }
    printf("Whitespace: %d\n", num_whitespace);
    printf("Other: %d\n", num_other);




}