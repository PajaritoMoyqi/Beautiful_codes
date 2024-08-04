#include <stdio.h>

int main( void )
{
    /* INITIALIZATION */
    // this code also works for char type variables
    int a = 1;
    int b = 0;

    printf( "a: %d b: %d\n", a, b );

    /* SWAP TWO VARIABLES */
    // For detailed explanations, see 'Swap_two_numbers.c' in same folder
    a^=b^=a^=b; // a ^= (b ^= (a ^= b));

    printf( "a: %d b: %d\n", a, b );

    return 0;
}