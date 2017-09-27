# Copyright (C) 2017 Johannes Steffens <johannes <dot> b <dot> steffens <at> gmail.com>. All rights reserved.
# Licensed under the MIT License (https://opensource.org/licenses/MIT)

# Computes all primes <= p_max writing Pi(p_max) to stdout.
# Usage: python primes.py [p_max]
# Default: p_max = 1000000


import sys

if len( sys.argv ) > 1: p_max = int( sys.argv[1] )
else:                   p_max = 1000000

primes = [];

i = 2
while i <= p_max:
   is_prime = True
   for j in primes:
       if j * j > i: break
       if i % j == 0:
           is_prime = False
           break

   if is_prime: primes.append( i )
   i += 1

print 'largest prime <= %i: %i' % ( p_max, primes[ len( primes ) -1 ] )
print 'Pi(%i) = %i' % ( p_max, len( primes ) )

