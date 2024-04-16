#include <stdio.h>
#include <string.h>

int main( void )
{
    /* COPY */
    // initial value
    char* t = "Hello, world!\0A\0"; // additional character 'A' added to see where pointer points

    // a pointer 'str' points to 's', which also is a pointer
    char* s, * str = s;

    // '++' has higher precedence than '*' but it is executed after operation anyway
    // '*' has higher precedence than '='
    // '=' returns assigned value
    // so given expression becomes below
    /*
        while ( *t )
        {
            *s = *t;
            s++;
            t++;
        }
        *s = *t;
        s++;
        t++;
    */
    while( *s++ = *t++ );

    /* PRINT OUT */
    printf( "%s\n", t ); // prints 'A' because it points value after null character
    printf( "%s\n", s ); // prints nothing or wrong value because it isn't assigned any value from pointer t

    // prints "Hello, world!" correctly
    printf( "%s\n", str );

    return 0;
}