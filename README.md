# Prime generation in C, Python, Actinon
The idea is showing the appearance and behavor of a simple algorithm across languages.

Note: **Actinon** is the interpreter of the [Actinon Ray Tracer](https://github.com/johsteffens/actinon). It is not meant to run very fast (only the renderer is supposed to run fast) but we want to show that it has the makings of a general purpose language.

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

I am aiming for the simplest approach in either language. 
*(There are algorithmic and syntactic ways to optimize either calculation.)*

