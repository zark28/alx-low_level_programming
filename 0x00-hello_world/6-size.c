#include <stdio.h>
/**
*main - print various data types and thier sizes
*Return: if exited properly , non-zero if otherwise
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(f));
return (0);
}
