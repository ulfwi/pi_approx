#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>


// Calculate pi by drawing a grid and counting the 
// number of grid points within the radius of a quarter circle
// compile with: gcc pi_pyth.c -lm
int main() {

    // width of grid (number of iterations)
    uint64_t N = 100000000;

    // number of grid points within the circle
    uint64_t N_c = 0;

    // iterate over the x-coordinates
    for (uint64_t x = 0; x <= N; x = x + 1)
    {
            // calculate the number of grid points below the circle
            // radius in y-direction using pythagoras theorem
            N_c += (uint64_t) sqrt((double) (N*N - x*x));
    }

    // approximate pi by approximating the quarter circle area as N_c
    float pi_approx = 4 * (float) N_c / ((N+1)*(N+1));

    // calculate error
    float error = fabs(M_PI - pi_approx);

    printf("N_c = %" PRIu64 "\n", N_c);
    printf("(N+1)*(N+1) = %" PRIu64 "\n", (N+1)*(N+1) );
    printf("Approximate value of pi: %.10f\n", pi_approx);
    printf("Error: %.10f\n", error);
}