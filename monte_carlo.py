import random
import math

# Number of random samples
N = 1000000

random.seed(1)

# Spawn N random samples and check if they're within the unit circle
N_c = 0  # Number of samples within the unit circle
for i in range(0, N):

    # Random samples
    x = random.uniform(0, 1)
    y = random.uniform(0, 1)

    # Check if they're within the unit circle
    if x**2 + y**2 <= 1:
        N_c += 1

print('Approximation of pi using ' + str(N) + ' random samples:\n' + str(4*float(N_c) / N))
print('Error: ' + str(abs(math.pi - 4*float(N_c) / N)))
