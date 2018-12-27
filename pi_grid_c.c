#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>

int main() {

    uint64_t N = 500000;

    float pi_approx = 0;

    uint64_t N_c = 0;
    //uint64_t counter = 0;
    for ( uint64_t x = 0; x <= N; x = x + 1 ) {
        for ( uint64_t y = 0; y <= N; y = y + 1 ) {
            
            if (x*x + y*y <= N*N) {
                N_c = N_c + 1;
            }

            // if ( counter % (N+1) == 0 ) {
            //     pi_approx = pi_approx + 4*(float)N_c / ((N+1)*(N+1));
            //     //printf("Approximate value of pi: %.10f\n", pi_approx);
            //     N_c = 0;
            // }

            // counter = counter + 1;
            // if (counter > N*N) {
            //     printf("counter: %" PRIu64 "\n", counter);
            //     printf("x: %" PRIu64 "\n", x);
            //     printf("y: %" PRIu64 "\n", y);
            // }
        }
    }

    pi_approx = 4*(float)N_c / ((N+1)*(N+1));

    //printf("counter: %" PRIu64 "\n", counter);

    printf("N_c: %" PRIu64 "\n", N_c);
    printf("N+1: %" PRIu64 "\n", (N+1)*(N+1) );

    float error = fabs(M_PI - pi_approx);

    printf("Approximate value of pi: %.10f\n", pi_approx);
    printf("Error: %.10f\n", error);

}