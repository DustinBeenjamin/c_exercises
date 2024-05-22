#include <stdio.h>
#define MAX_LENGTH 100  /* not sure what the max lenth of a string is, so i am arbitrarily limiting it to 100 characters */


int get_line_size(char line[]);


int main() {

    while (1 == 1){
        char sentence[MAX_LENGTH];
        printf("Enter a sentence to see its length\n");
        scanf("%s", sentence);

        printf("You typed %s\n", sentence);
    }


}

// int get_line_size(char line[]) {
//     int count, c;
//     count = c = 0;

//     while ((c = getchar()) != '\n') {
//         ++count;
//     }
//     return count;
    
// }

