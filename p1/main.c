
/* Incluse for printing  */
#include <stdio.h>
/* Function to calculate multiple  */
#include "multiple.h"
/* for malloc */
#include <stdlib.h>

int main(){

    /* variables */
    int *multiples;
    //allocate memory
    multiples = malloc(sizeof(int) * 2);

    if (multiples == NULL) {
        printf("malloc failure\n");
    }
    //assignm multiples value.
    multiples[0] = 3;
    multiples[1] = 5;

    int multipleSum = 0;
    int multiplesBelow = 1000;

    printf("calculating multiplesum\n");
    multipleSum = multiple(2, multiples, multiplesBelow);

    printf("Sum of multiples of 3 and 5 below 1000 is: %d\n", multipleSum);

    return 0;
}



