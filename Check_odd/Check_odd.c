#include <stdio.h>

int main( void )
{
    /* INITIALIZATION */
    int num = 1;

    /* ODD CHECK */
    // if given number is odd, LSB(Least Significant Bit) of the variable should be 1
    if ( num & 1 ) // bit AND operation
        printf( "Odd number\n" );
    else
        printf( "Even number\n" );
    
    return 0;
}