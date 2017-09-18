# Simple comparison of Python and C

primes.py and primes.c do the same thing:
*   Compute all prime numbers up to including a specified maximum.
*   Store all prmes in an array.
*   Print the number of primes: *Pi(p_max)*

The motivation was to write a short routine for testing/demonstrating key differences between C and Python implementations.
You can run them as follows:
* `python primes.py [p_max]`
* `gcc primes.c; a.out [p_max]`

`p_max` specifies the upper limit for the calculation. If not specified, the routine assumes `p_max=1000000`.

I am aiming for the simplest approach in either language in a transparent way. 
*(There are algorithmic and syntactic ways to optimize either calculation.)*

The python code is shorter, quicker to implement and to comprehend. The C version executes up to a factor 10 faster, though.
