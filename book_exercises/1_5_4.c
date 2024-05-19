#include <stdio.h>

//Count words on a single line from stdin. Use CNTL+D to see results (it introduces an EOF character)
int main() {

    int c;
    int count = 0;
    int previous_whitespace = 1;
    int current_whitespace = 0;

    //Count the end of words as they transition to whitespace (space or tab)
    while ((c = getchar()) != EOF) {
        current_whitespace = (c == ' ' || c == '\t' || c == '\n');
        if (current_whitespace ^ previous_whitespace) {
            if (!previous_whitespace && current_whitespace) {
                ++count;
            }
            previous_whitespace = !previous_whitespace;
        }
    }
   
    printf("Words Counted: %d\n", count);
    return 0;

}