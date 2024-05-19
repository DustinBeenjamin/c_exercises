#include <stdio.h> 

int main(){
    float grades[] = {99.98, 45.32, 87.32, 12.23, 45.56, 94.65};
    int grades_size = sizeof(grades) / sizeof(grades[0]);
    float grades_sum = 0;


    for (int i = 0; i < grades_size; ++i){
        grades_sum += grades[i];
    }

    printf("The average grade was %3.2f%%\n", grades_sum / grades_size);
}