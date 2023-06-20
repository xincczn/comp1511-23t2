// Scan in fixed number of inputs

#include <stdio.h>

#define STUDENT_NUM 10

int main(void) {
    // Sypnosis: We want to scan in the ages of all our 10 students
    int student_ages[STUDENT_NUM];

    int i = 0;
    while (i < STUDENT_NUM) {
        scanf(" %d", &student_ages[i]);
        i++;
    }

    int j = 0;
    while (j < STUDENT_NUM) {
        printf("%d ", student_ages[j]);
        j++;
    }
    printf("\n");

    return 0;
}