/* Calculates multiples of a given number and sums them up.
   A upper limit is given to know when to stop. */
#include <stdio.h>

int multiple(int nMultiples, int *passedMultiples,int upperLimit) {

    int accumulator = 0;
    int i = 0;

    do
    {
        for (int j = 0; j < nMultiples; j++) {
            /* Check if i is a multiple of any of the given */
            if ((i % passedMultiples[j]) == 0) {
                /* i was a multiple to one of the numbers
                   so it is added to accumulator */
                accumulator += i;
                /* Break from the for loop an continue with
                   the next number. */
                break;
            }
        }

        /* increment i */
        i++;

    } while (i < upperLimit);

    return accumulator;
}


