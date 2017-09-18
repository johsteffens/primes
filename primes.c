// Copyright (C) 2017 Johannes Steffens <johannes <dot> b <dot> steffens <at> gmail.com>. All rights reserved.

// Licensed under the MIT License (https://opensource.org/licenses/MIT)

// Computes all primes <= p_max writing Pi(p_max) to stdout.
// Usage: gcc primes.c; ./a.out [p_max]
// Default: p_max = 1000000

#include <stdio.h>
#include <stdlib.h>

int main( int arc, const char** argv )
{
    int* p_arr = NULL;
    int  p_size = 0;
    int  p_space = 0;
    int  p_max = arc > 1 ? atoi( argv[ 1 ] ) : 1000000;

    size_t i;
    for( i = 2; i <= p_max; i++ )
    {
        int is_prime = 1;
        size_t j;
	    for( j = 0; j < p_size; j++ )
	    {
            int p = p_arr[ j ];
            if( p * p > i ) break;
            if( i % p == 0 )
            {
                is_prime = 0;
                break;
            }
        }
        if( is_prime )
        {
            if( p_space == p_size )
            {
                p_space = p_space > 0 ? p_space * 2 : 1;
                p_arr = realloc( p_arr, sizeof( int ) * p_space );
            }
            p_arr[ p_size++ ] = i;
        }
    }

    if( p_arr != NULL ) free( p_arr );

    printf( "Pi(%i) = %i\n", p_max, p_size );
}
