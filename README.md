# Prime generation in C, Python, Actinon

primes.c, primes.py and primes.acn do the same thing:
*   Compute all prime numbers up to including a specified maximum `p_max`
*   Store all primes in an array.
*   Print the largest prime <= p_max
*   Print the number of primes: *Pi(p_max)*

You can run them as follows:
* `gcc primes.c; a.out [p_max]`
* `python primes.py [p_max]`
* `actinon primes.acn [p_max]`

If `p_max` is not specified, the routine sets `p_max=1000000`.

Note: **Actinon** is the interpreter of the [Actinon Ray Tracer](https://github.com/johsteffens/actinon).

## Motivation
Analyzing syntax and runtime behavior of a simple algorithm across languages.
