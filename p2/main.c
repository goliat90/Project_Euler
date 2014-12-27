/* for printf */
#include <stdio.h>
/* boolean */
#include <stdbool.h>

/* function prototypes */
int nextFi(int, int);
int evenFibSum(int);

int main(){
    int result;
    int limit = 4000000;
    /* calculate the sum */
    result = evenFibSum(limit); 

    /* print the sum */
    printf("Sum of even fibonacci numbers below %d is %d\n", limit, result);
}


/*
    Calculates the next fibonacci number
    given two current.
*/
int nextfib(int first, int second) {
    return (first + second);
}

/*
    Sum up the even fibonacci numbers
    below a given limit
*/
int evenFibSum(int limit) {
    /* variables */
    int firstFib = 1;
    int secondFib = 2;
    //add 2 initially to fibsum?
    int fibSum = 0;
    /*
    go through all fibonaci numbers up
    to the given limit
    */
    while (true) {
        /* check if any of the current fibonaci numbers are even */
        if ((firstFib % 2) == 0) {
            /* firstFib is even, add it to the sum. */
            fibSum += firstFib;
        }
        if ((secondFib % 2) == 0) {
            /* secondFib is even, add it to the sum. */
            fibSum += secondFib;
        }
        /* calculate the next fibonaci numbers */
        firstFib = nextfib(firstFib, secondFib);
        secondFib = nextfib(firstFib, secondFib);
        /*
        check if either fibonaci number
        is larger than the limit, if so leave loop.
        */
        if ((firstFib > limit) | (secondFib > limit)) {
            break;
        }
    }

    /* return the sum */
    return fibSum;
}

