import math

# Size of grid
N = 1000


N_c = 0  # Number of samples within the circle
for x in range(0, N + 1):
    #for y in range(0, N + 1):
    for y in range(N, -1, -1):  # start at the top
        
        # Check if they're within the circle
        if x**2 + y**2 <= N**2:
            N_c += 1

pi_approx =  4*float(N_c) / N**2

print('Approximation of pi using ' + str(N) + ' random samples:\n' + str(pi_approx))
print('Error: ' + str(abs(math.pi - pi_approx)))


# faster version
# todo: only check at the radius (if possible)

N_c = 0  # Number of samples within the circle
for x in range(0, N + 1):
    for y in range(N, -1, -1):  # start at the top
        
        # Check if they're within the circle
        if x**2 + y**2 <= N**2:
            N_c += y
            break

pi_approx =  4*float(N_c) / N**2

print('Approximation of pi using ' + str(N) + ' random samples:\n' + str(pi_approx))
print('Error: ' + str(abs(math.pi - pi_approx)))