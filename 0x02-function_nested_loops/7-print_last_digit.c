#include"main.h"
/**
*print_last_digit- function that prints last digit
*n: inputs an integer
*Return: return output
*/
int print_last_digit(int n)
{
int ln = n%10;
if (n < 0)
ln = ln*-1;
_puychar(ln + '0');
return (ln);
}
