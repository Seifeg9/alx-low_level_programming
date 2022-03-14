#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
=======

>>>>>>> ea06ee7ea3cda7bbe8a3da6b334a6ade73a93ef4
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is nrgative", n);
else
printf("%d is zero", n);
return (0);
}
