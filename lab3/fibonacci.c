#include <stdlib.h>
#include <stdio.h>

/*
 * Define a function void fib(...) below. This function takes parameter n
 * and generates the first n values in the Fibonacci sequence.  Recall that this
 * sequence is defined as:
 *         0, 1, 1, 2, 3, 5, ... , fib[n] = fib[n-2] + fib[n-1], ...
 * The values should be stored in a dynamically-allocated array composed of
 * exactly the correct number of integers. The values should be returned
 * through a pointer parameter passed in as the first argument.
 *
 * See the main function for an example call to fib.
 * Pay attention to the expected type of fib's parameters.
 */

/* Write your solution here */
void fib(int **fib_sequence, int count){
  *fib_sequence = malloc(sizeof(int) * count);
  if (count == 0){

  } else if (count == 1){
    (*fib_sequence)[0] = 0;
  } else if (count == 2){
    (*fib_sequence)[0] = 0;
    (*fib_sequence)[1] = 1;
  } else {
    (*fib_sequence)[0] = 0;
    (*fib_sequence)[1] = 1;
    int i = 2;
    while (i < count){
      (*fib_sequence)[i] = (*fib_sequence)[i-1] + (*fib_sequence)[i-2];
      i++;
    }
  }
}


int main(int argc, char **argv) {
    /* do not change this main function */
    int count = strtol(argv[1], NULL, 10);
    int *fib_sequence;

    fib(&fib_sequence, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", fib_sequence[i]);
    }
    free(fib_sequence);
    return 0;
}
