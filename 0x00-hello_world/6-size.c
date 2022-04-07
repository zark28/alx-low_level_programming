#include <stdio.h>

/**
*main - pr various data types and thier sizes
*return - ) if exited properly , non-zero if otherwise
*/

int main(void)
{
    print("Size of char: %d byte(s)\n", sizeof(char));
    print("Size of int: %d byte(s)\n", sizeof(int));
    print("Size of long int: %d byte(s)\n", sizeof(long int));
    print("Size of long long int: %d byte(s)\n", sizeof(long long int));
    print("Size of float: %d byte(s)\n", sizeof(float));
    return (0);
}