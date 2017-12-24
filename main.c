#include "libft.h"
#include <stdio.h> 
#include <locale.h>


 int main()
{
	char *l;
	l = setlocale(LC_ALL, "");


	printf ("or [%.14ls]\n", L"факамакадон");
	ft_printf ("my [%.14ls]\n", L"факамакадон");
//	printf ("%d\n", 1/2);
//	system ("leaks printf");

    return 0;
}