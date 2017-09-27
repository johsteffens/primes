# Simple comparison of Python and C

primes.py and primes.c do the same thing:
*   Compute all prime numbers up to including a specified maximum.
*   Store all primes in an array.
*   Print the number of primes: *Pi(p_max)*

The primary purpose is testing/demonstrating some key differences between the C and Python programming languages.
You can run them as follows:
* `python primes.py [p_max]`
* `gcc primes.c; a.out [p_max]`

`p_max` specifies the upper limit for the calculation. If not specified, the routine assumes `p_max=1000000`.

I am aiming for the simplest approach in either language. 
*(There are algorithmic and syntactic ways to optimize either calculation.)*

Not surprisingly, the immediate benefits are ...
* **Python:** Simplicity! Quicker to implement and easier to comprehend.
* **C:** Runtime efficiency! Execution speed is up to a factor 10 higher.
