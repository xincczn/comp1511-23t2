/*
    Create an integer array with at least 5 elements.

    Create a while loop which loops through every element of the array.

    Write an if statement which adds 1 to each even value. Do this within the while loop.

    Write another while loop which goes through the array with a different iterator (i.e. if you used i last time, use j)

    Print out the values in the array.
*/

#include <stdio.h>

int main(void) {
    // We declare arrays similar to normal data type
    // When creating and initialising a variable, we use the following format
    // <type> <variable_name> = <value>;

    // int [] is the type here, but the tricky part is that the [] comes after the variable name
    int array[5] = {1, 2, 3, 4, 5};
    
    // Here, `i` is our counter which checks each index of our array starting from 0 -> 4
    // Remember that array indices start at 0 and not 1 so be careful
    int i = 0;
    while (i < 5) {  // Here we stop when `i` is equal to 5, which is the size of the array
        // When we index our array `array[i]` we can now treat this as a variable holding a value
        // And we can perform all the operations and actions likewise
        // Using mod 2 allows us to check for even/odd numbers based on remainder
        if (array[i] % 2 == 0) {
            array[i]++;
        }

        i++;
    }

    // Using `j` for second loop, becareful of reusing same variable
    // If you do, make sure to reset it to 0 (or whatever the starting value is)
    int j = 0;
    while (j < 5) {
        printf("%d ", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}