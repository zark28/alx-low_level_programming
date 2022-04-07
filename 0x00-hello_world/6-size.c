#include <stdio.h>
/**
*main - print various data types and thier sizes
*Return: if exited properly , non-zero if otherwise
*/
int main(void)
{
int a:
char b;
long int c;
long long int d;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
