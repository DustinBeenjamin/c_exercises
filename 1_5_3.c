#include <stdio.h>

//Count lines
int main() {

    int count = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            count++;
            printf("Lines Counted: %d\n", count);
        }
    }
}