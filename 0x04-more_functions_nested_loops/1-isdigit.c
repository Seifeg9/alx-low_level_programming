#include "main.h"

/**
* _isdigit - checks if c is digit between 0 t0 9
* @c: character to be checked
*
* Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
