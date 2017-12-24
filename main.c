#include "libft.h"
#include <stdio.h> 
#include <locale.h>


 int main()
{
	char *l;
	l = setlocale(LC_ALL, "");


	printf ("or [%.19ls]\n", L"фака мака дон опана опана опана");
	ft_printf ("my [%.19ls]\n", L"фака мака дон опана опана опана");
//	printf ("%d\n", 1/2);
//	system ("leaks printf");

    return 0;
}