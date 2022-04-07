#include <stdio.h>
/**
*main - print various data types and thier sizes
*Return: if exited properly , non-zero if otherwise
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
