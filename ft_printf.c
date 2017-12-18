/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:37:54 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/13 18:38:00 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h> // for intmax_t, uintmax_t
#include <stdarg.h>

#include <stdio.h>
#include "libft/libft.h"

void	size_spec_hh(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_itoa((int)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	size_spec_ll(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	size_spec_h(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoas((short)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	size_spec_l(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_itoa((int)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	size_spec_j(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoa_intmax((intmax_t)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	size_spec_z(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	//else if (str[i] == 'o')
}

void	check_size_spec(char *str, char **rez, va_list ap)
{
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
		size_spec_z(str, rez, ap);	
}

void	make_precision(char *str, char **rez, int lenprsn)
{
	int i;
	char *tmp;

	tmp = *rez;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')	
		*rez = ft_prnt_strjoin_prsn(lenprsn, *rez);
	free (tmp);

}

int  	count_precision(char *str)
{
	int i;
	int j;
	int prsn;
	char precision[100];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			i++;
			while (ft_isdigit(str[i]))
				precision[j++] = str[i++];
			precision[j] = '\0';
			break;
		}
		i++;
	}
	prsn = ft_atoi(precision);
	return (prsn);
}

void	check_precision(char *str, char **rez)
{
	int prsn;

	prsn = count_precision(str);
	if ((size_t)prsn > ft_strlen(*rez) && (*rez)[0] != '-')
		make_precision(str, rez, prsn - ft_strlen(*rez));
	if ((*rez)[0] == '-' && (size_t)prsn > ft_strlen(*rez) - 1)
		make_precision(str, rez, prsn - ft_strlen(*rez));
}

void	make_width(char **rez, int lenwidth)
{
	char *tmp;

	tmp = *rez;
	*rez = ft_prnt_strjoin_width(lenwidth, *rez);
	free(tmp);
}

int 	count_min_width(char *str)
{
	int i;
	int j;
	int wd;
	char width[11];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) && (i == 0 || str[i - 1] != '.'))
		{
			while (ft_isdigit(str[i]))
				width[j++] = str[i++];
			width[j] = '\0';
			break;
		}
		i++;	
	}
	wd = ft_atoi(width);
	return (wd);
}

void	check_min_width(char *str, char **rez)
{
	int wd;

	wd = count_min_width(str);
	if ((size_t)wd > ft_strlen(*rez))
		make_width(rez, wd - ft_strlen(*rez));
}

void	make_minus_flag(char *str, char **rez)
{
	char *tmp;

	if (str[ft_strlen(str) - 1] != 's' && str[ft_strlen(str) - 1] != 'S'\
		&& (*rez)[0] == ' ')
	{
		tmp = *rez;
		*rez = ft_prnt_replace_spc(*rez);
		free(tmp);
	}
}

void	make_plus_flag(char **rez)
{
	int i;
	char *tmp;

	i = 0;
	while ((*rez)[i] == ' ')
		i++;
	if ((*rez)[i] != '-')
	{
		tmp = *rez;
		*rez = ft_prnt_strjoin_plus("+", *rez);
		free(tmp);
	}
}

void	make_zero_flag(char *str, char **rez)
{
	int i;
	char *tmp;

	i = 0;
	tmp = *rez;
	while (str[i] != '\0')
	{	
		if (str[i] == '.' || str[i] == '-')
			return ;
		i++;
	}
	if ((*rez)[0] == ' ')
	{
		*rez = ft_prnt_add_zero(*rez);
		free(tmp);
	}	
}

void	make_space_flag(char *str, char **rez)
{
	int i;
	char *tmp;
	int prsn;

	i = 0;
	prsn = 0;
	tmp = *rez;
	while(str[i] != '\0')
	{
		if(str[i] == '+')
			return ;
		if(str[i] == '.')
			prsn = 1;
		i++;
	}
	if ((prsn) && (*rez)[0] != '-') 
	{
		*rez = ft_strjoin(" ", *rez);
		free(tmp);
	}	
	if ((*rez)[0] == ' ')
		return ;
	if (((*rez)[0] == '0' || ft_isdigit((*rez)[0])))
	{ 
		*rez = ft_prnt_space_flag(*rez);
		free(tmp);
	}	
}
// [-] [+] [ ] [#] [0]
void	check_flags(char *str, char **rez)
{
	int i;

	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '-')
			make_minus_flag(str, rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '+')
			make_plus_flag(rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '0')
			make_zero_flag(str, rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == ' ')
			make_space_flag(str, rez);
//	i = 0;
//	while (str[i++] != '.' && !(ft_isalpha(str[i]))\
//		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
//	{
//		if (str[i] == '#')
//			make_sharp_flag(str, rez);
//	}	
}

void	conv_d_i(char *str, char **rez, va_list ap)
{
	check_size_spec(str, rez, ap);
	if (*rez == NULL)
		*rez = ft_itoa(va_arg(ap, int));
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
	ft_putstr(*rez);
}

// check d, D, i, u, U
int check_digit_conv(char *str, va_list ap)
{
	int i;
	char *rez;

	rez = NULL;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')
		conv_d_i(str, &rez, ap);
//	else if (str[i] == 'D')
//		conv_bd(str, ap);
//	else if (str[i] == 'i')
//		conv_i(str, ap);
//	else if (str[i] == 'u')
//		conv_u(str, ap);
//	else (str[i] == 'U')
//		conv_bu(str, ap);
	return (ft_strlen(rez));
}

int	ft_printf(const char *format, ...)
{
	int i;
	int j;
	int sign;
	char *mainstr;
	va_list ap;
	int ret;

	i = 0;
	j = 0;
	ret = 0;
	if (!(mainstr = ft_memalloc(50)))
		return 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		sign = 1;
		if (format[i] == '%')
		{
			i++;
			while(sign)
			{	
				if (format[i] == 'd' || format[i] == 'D' ||
					format[i] == 'i' || format[i] == 'u' ||
					format[i] == 'U')
				{	
					mainstr[j] = format[i];
					sign = 0;
					ret = ret + check_digit_conv(mainstr, ap);
				}
				else if (format[i] == 'o' || format[i] == 'O' ||
					format[i] == 'x' || format[i] == 'X' ||
					format[i] == 'p')

				{
					mainstr[j] = format[i];
					sign = 0;
				//	check_octhex_conv(mainstr, ap);
				}
				else if (format[i] == 'c' || format[i] == 'C' ||
					format[i] == 's' || format[i] == 'S' ||
					format[i] == '%')
				{
					mainstr[j] = format[i];
					sign = 0;
				//	check_char_conv(mainstr, ap);
				}
				else	
					mainstr[j] = format[i];
				i++;
				j++;
			}
		ft_strclr(mainstr);
		}
		if(format[i] != '\0')
		{	
			ft_putchar(format[i]);
			i++;
			ret++;
		}
		j = 0;	
	}
	va_end(ap);	
	return (ret);
}

/*
void	check_octhex_conv(char *str, va_list ap)
{
	int i;

	i = ft_strlen(str) - 1;
	if (str[i] == 'o')
		conv_o(str, ap);
	else if (str[i] == 'O')
		conv_bo(str, ap);
	else if (str[i] == 'x')
		conv_x(str, ap);
	else if (str[i] == 'X')
		conv_X(str, ap);
	else (str[i] == 'p')
		conv_p(str, ap);
}

void	check_char_conv(char *str, va_list ap)
{
	int i;

	i = ft_strlen(str) - 1;
	if (str[i] == 'c')
		conv_c(str, ap);
	else if (str[i] == 'C')
		conv_bc(str, ap);
	else if (str[i] == 's')
		conv_s(str, ap);
	else if (str[i] == 'S')
		conv_bs(str, ap);
	else (str[i] == '%')
		conv_percent(str, ap);
}
*/

int main ()
{
	int a =	ft_printf("(12.13d)  - 123[% 012.13d]    [%+10.13d]\n", 213, 0);
	int b = printf("(12.13d)  - 123[% 012.13d]    [%+10.13d]\n", 213, 0);
	printf("a == %d\nb == %d\n", a, b);
	system ("leaks, printf");
	return (0);

}






































/*
//[-] [+] [0] [#] [ ]
void	check_flags(char **str, const char *format, )
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (format[i] == '-' && format[i] == '+' && format[i] == '0'\
		format[i] == '#' && format[i] == ' ')
	{	
		if (format[i] == '-')
			check_flag_minus(char **str, '-')
		if (format[i] == '+')
			check_flag_plus
		if (format[i] == '0')
			check_flag_zero
		if (format[i] == '#')
			check_flag_sharp
		if (format[i] == ' ')
			check_flag_space
		i++;
		j++;
	}		
}

void	check_flag_minus(char **str, char minus)
{
	int i;

	i = 0;
	while ((*str)[i] != '\0')
	{
		if ((*str)[i] == '0')
			(*str)[i] == '-';
	}
}

check_min_width

check_precision

check_size_spec

//d D i u U
check_digit_conv(const char *str, )
{

}

// o O x X p
check_octhex_conv()

// c C s S %
check_char_conv
*/
