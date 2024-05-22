#include <stdio.h>

//A quick tutorial on basic function use

//Write a function that calculates a power, and returns the product (integers only) 
int power(int base, int exponent);

int main(){
    int test_bases[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int test_exponents[] = {0, 1, 2};
    int num_bases = sizeof(test_bases) / sizeof(test_bases[0]);
    int num_exponenets = sizeof(test_exponents) / sizeof(test_exponents[0]);

    // printf("Bases: %d\n", num_bases);
    // printf("Exp: %d\n", num_exponenets);

    for (int i = 0; i < num_bases; i++){
        for (int j = 0; j < num_exponenets; j++) {
            printf("%d^%d=%d\n", test_bases[i], test_bases[j], power(test_bases[i], test_bases[j]));
        }
        printf("\n");
    }
}

int power(int base, int exponent) {
    int product = 1;
    for (int i = 0; i< exponent; i++){
        product *= base;
    }
    return product;
}