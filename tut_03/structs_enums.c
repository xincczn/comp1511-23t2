#include <stdio.h>

#define CHILD_OPAL_CARD 0
#define ADULT_OPAL_CARD 1
#define STUDENT_OPAL_CARD 2

struct person {
    int shoe_size;
    double height;
    char first_name_initial;
};

struct student {
    int id;
    int year;
    // int opal_type;
    // ^ Replaced by the following enum
    enum opal_card_type type;
}

enum opal_card_type {
    CHILD,
    ADULT,
    STUDENT,
};

int main() {
    // Note that <struct person> is the type here and not just <struct> by itself
    // As per above, we have constructed two structs, so <struct> on its own is
    // Just not enough information for our compiler to differentiate
    struct student john;
    john.id = 5501;
    john.year = 1;
    john.opal_card_type = opal_card_type.STUDENT;

    // Alternative way to initialise our struct, using {}, and entering values in order
    struct student jane = { 5413, 2, opal_card_type.STUDENT };

    // We can even directly scan into the struct from input
    struct person bob;
    scanf("%d %lf %c", &bob.id, &bob.year, &bob.type);
}

