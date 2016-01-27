// Random generator source:
// http://www.programmingsimplified.com/c-program-generate-random-numbers

#include <stdio.h>
#include <stdlib.h>

// A sequence of seeds is used to feed the srand() function
// Using rand, it generates a random number between 0 and 100

int main() {
  int i, j, k, n, perc, count, probability;

  perc = 0;
  count = 100;
  // Probability percentage required
  probability = 0;

  for (k = 0; k <= 10; k++) {
    probability = k * 10;
    for (i = 0; i < count; i++) {
      srand(rand() % 100 + 1);
      n = 0;
      for (j = 1; j <= 1000; j++) {
        if ((rand() % 100 + 1) <= (probability+1)) {
          n++;
        }
      }
      // printf("%d hits\n", n);
      perc += n;
    }

    perc = (perc / count) / 10;
    printf("\nProbability is %d\n", probability);
    printf("Hit percentage: %d %%\n", perc);
  }

  return 0;
}
