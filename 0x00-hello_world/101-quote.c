#include <stdio.h>
#include <unistd.h>
/**
*main -prints ea quoet then new line, to the standars error
*Return: 1 for success
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
