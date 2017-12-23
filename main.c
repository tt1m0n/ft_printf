#include "libft.h"
#include <stdio.h>

int main ()
{
 
 //  int a;
 //  int b;     

 	printf("or [%x]\n", 42);
 	ft_printf("my [%x]\n", 42);

//	a = printf("or [%o%o%o%o%o]\n", 1, 100, 999, 42, 999988888);
//	b = ft_printf("my [%o%o%o%o%o]\n", 1, 100, 999, 42, 999988888);

//	printf ("a === %d   b === %d\n", a, b);
//	system ("leaks printf");
	return (0);
}	

/*
	p = ft_memalloc(6);
	if (ft_prnt_strstr(str, "j"))
		p[0] = '1';
	else if (ft_prnt_strstr(str, "z"))
		p[1] = '1';
	else if (ft_prnt_strstr(str, "ll"))
		p[2] = '1';
	else if (ft_prnt_strstr(str, "l"))
		p[3] = '1';
	else if (ft_prnt_strstr(str, "hh"))
		p[5] = '1';
	else if (ft_prnt_strstr(str, "h"))
		p[4] = '1';
		
	if (p[5] == 1)
	{
		ft_putstr("syka");	
		size_spec_hh(str, rez, ap);
	}	
	if (p[4] == 1)
		size_spec_h(str, rez, ap);
	if (p[3] == 1)
		size_spec_l(str, rez, ap);
	if (p[2] == 1)
		size_spec_ll(str, rez, ap);
	if (p[1] == 1)
		size_spec_z(str, rez, ap);
	if (p[0] == 1)
		size_spec_j(str, rez, ap);
}
*/
/*
	if (ft_prnt_strstr(str, "hh"))
		size_spec_hh(str, rez, ap);
	else if (ft_prnt_strstr(str, "ll"))
		size_spec_ll(str, rez, ap);
	else if (ft_prnt_strstr(str, "h"))
		size_spec_h(str, rez, ap);
	else if (ft_prnt_strstr(str, "l"))
		size_spec_l(str, rez, ap);
	else if (ft_prnt_strstr(str, "j"))
		size_spec_j(str, rez, ap);
	else if (ft_prnt_strstr(str, "z"))
		size_spec_z(str, rez, ap);	*/
/*
int use_ss_long(char *str, char **rez, va_list ap, char *p)
{
	if (p[0] == '1')
	{	
		size_spec_j(str, rez, ap);
		return (1);
	}	
	if (p[1] == '1')
	{	
		size_spec_j(str, rez, ap);
		return (1);
	}	
	if (p[2] == '1')
	{	
		size_spec_ll(str, rez, ap);
		return (1);
	}
	return (0);	
}

void	use_ss_short(char *str, char **rez, va_list ap, char *p)
{
	if (p[3] == '1')
	{	
		size_spec_l(str, rez, ap);
		return ;
	}	
	if (p[5] == '1' && p[4] == '0')
	{	
		size_spec_h(str, rez, ap);
		return ;
	}	
	if (p[4] == '1')
	{	
		size_spec_hh(str, rez, ap);
		return ;
	}
}

void	check_size_spec(char *str, char **rez, va_list ap)
{
	char *p;

	p = ft_prnt_memalloc(6);
	if (ft_prnt_strstr(str, "j"))
		p[0] = '1';
	else if (ft_prnt_strstr(str, "z"))
		p[1] = '1';
	else if (ft_prnt_strstr(str, "ll"))
		p[2] = '1';
	else if (ft_prnt_strstr(str, "l"))
		p[3] = '1';
	else if (ft_prnt_strstr(str, "hh"))
		p[4] = '1';
	else if (ft_prnt_strstr(str, "h"))
		p[5] = '1';

	if (use_ss_long(str, rez, ap, p) == 0)
		use_ss_short(str, rez, ap, p);
	free(p);	
}*/