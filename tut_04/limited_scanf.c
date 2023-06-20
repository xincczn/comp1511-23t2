// Scan in fixed number of inputs

#include <stdio.h>

#define STUDENT_NUM 10

int main(void) {
    // Sypnosis: We want to scan in the ages of all our 10 students and find the average age to two decimals
    int student_ages[STUDENT_NUM];

    printf("Scan ages: ");

    int i = 0;
    while (i < STUDENT_NUM) {
        scanf(" %d", &student_ages[i]);
        i++;
    }

    printf("Print ages: ");
    // Ensure all ages are scanned in and stored in our array
    int j = 0;
    while (j < STUDENT_NUM) {
        printf("%d ", student_ages[j]);
        j++;
    }
    printf("\n");

    // Read in ages from array and calculate mean
    printf("Average age: ");
    double average_age = 0.0;

    int k = 0;
    while (k < STUDENT_NUM) {
        average_age += student_ages[k];
        k++;
    }
    printf("%.2lf\n", average_age);

    return 0;
}