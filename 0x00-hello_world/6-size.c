#include <stdio.h>
/**
*main - print various data types and thier sizes
*Return: if exited properly , non-zero if otherwise
*/
int main(void)
{
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
