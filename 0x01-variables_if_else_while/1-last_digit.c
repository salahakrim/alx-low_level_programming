#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    srand(time(0));  // Seeds the random number generator with the current time

    n = rand();  // Assigns a random number to the variable n

    int lastDigit = n % 10;  // Extracts the last digit of n

    printf("Last digit of %d is ", n);

    if (lastDigit > 5) {
        printf("greater than 5\n");
    } else if (lastDigit == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }

    return 0;
}

