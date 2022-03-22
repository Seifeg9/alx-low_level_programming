#include""[D[D[Cmain.h"
/**
*print _sign[D[D[D[D[[[C[C[C[C_sign-prints the sign of a number
@n : inputs an integer[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D*[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C
*Return: 1 if n is > zero, 0 if n is zero, -1 if n is < zero
*/
int print_sign(int n)
{
if(n > 0)
{
_putchar('+");
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{_putchar('-');
return(-1);
}
}
