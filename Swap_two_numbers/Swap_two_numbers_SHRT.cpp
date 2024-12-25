#include <iostream>

int main()
{
    /* INITIALIZATION */
    int a = 1;
    int b = 0;

    std::cout << a << " " << b << std::endl;

    /* SWAP TWO VARIABLES */
    // For detailed explanations, see 'Swap_two_numbers.cpp' in same folder
    a^=b^=a^=b; // a ^= (b ^= (a ^= b));

    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}