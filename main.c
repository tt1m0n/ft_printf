#include "libft.h"
#include <stdio.h>

int main ()
{

	printf("%hU\n", 4294967296);
	ft_printf("%hU", 4294967296);
	system ("leaks printf");
	return (0);
}	