/*
    Create a character array with exactly 8 elements.

    Create a character variable called largest_character, equal to the first character of the array.

    Create a while loop to loop through the character array.

    Create an if statement to check if the current character has a higher ascii value than "largest_character"

    Print out the largest character you've found.

    Ensure your code would pass "1511 style"
*/
// By Xing (z5413977) 20/06/23

#include <stdio.h>

int main(void) {
    char word[8] = "acdzedah";
    char largest_character = word[0];

    int i = 0;
    while (i < 8) {
        if (word[i] > largest_character) {
            largest_character = word[i];
        }
        i++;
    }

    printf("Largest character by ASCII value: %c", largest_character);

    return 0;
}