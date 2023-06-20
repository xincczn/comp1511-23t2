/*
    Create an array of doubles with 3 elements, each with a non-zero value.

    Create another array of doubles with 10 elements where every element initialised to 0.0.

    Create a while loop that loops through every element of the first array.

    Copy the elements of the first array into the second array (leave 0's at the end)

    Create a while loop that prints out all the elements of the second array.
*/

#include <stdio.h>

int main(void) {


    // We declare an array of size 3 that holds doubles with the values 1.2, 2.4, 4.8 respectively
    double array_1[3] = { 1.2, 2.4, 4.8 };
    // Here we declare all values of the second array to be assigned 0.0
    double array_2[10] = { 0.0 };

    // Since we are copying the contents of the first array into the second array
    // and the first is strictly smaller in size, 
    // we can assume that there won't be any index out of bounds error
    int i = 0;
    while (i < 3) {
        array_2[i] = array_1[i];
        i++;
    }

    // Print out second array
    int j = 0;
    while (j < 10) {
        // The .2 in between allows us to cap the decimal to 2 decimal places for printing
        printf("%.2lf ", array_2[j]);
        j++;
    }

    return 0;
}