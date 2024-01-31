#include <stdio.h>

int main(void) {
    // a variable is a named memory location
    int position; // variable declaration
    position = 10;  // variable initialization
    printf("position: %d\n", position);

    float mynum = 2323.24444213;
    printf("mynum: %f\n", mynum);

    double num = 2323.24444213432423;
    printf("num: %lf\n", num);

    char c = 'Y'; 
    printf("C: %c\n", c);

    char v = 113; // a char is a number mapped to a character
    printf("C: %c\n", v);

    return 0;
}