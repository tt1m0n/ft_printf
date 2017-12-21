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

#include "libft.h"

void	size_spec_hh(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_itoa((char)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_itoa((unsigned char)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 16, 1);
}

void	size_spec_ll(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_prnt_itoaull((unsigned long long)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 1);
}

void	size_spec_h(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoas((short)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_prnt_itoaus((unsigned short)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaus_octhex((unsigned short)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaus_octhex((unsigned short)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaus_octhex((unsigned short)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaus_octhex((unsigned short)va_arg(ap, void*), 16, 1);
}

void	size_spec_l(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')// D?
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_prnt_itoaull((unsigned long long)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 1);
}

void	size_spec_j(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i') // D?
		*rez = ft_prnt_itoa_intmax((intmax_t)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_prnt_itoa_uintmax((uintmax_t)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoauimax_octhex((uintmax_t)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoauimax_octhex((uintmax_t)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoauimax_octhex((uintmax_t)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoauimax_octhex((uintmax_t)va_arg(ap, void*), 16, 1);

}

void	size_spec_z(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	else if (str[i] == 'u') // D?
		*rez = ft_prnt_itoaull((unsigned long long)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 1);
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
	//if (str[i] == 'd' || str[i] == 'i' ||str[i] == 'D' ||
	//	str[i] == 'U' || str[i] == 'u')	
	if (str[i] != 'c' && str[i] != 'C' && str[i] != 'p' && str[i] != '%')
	{		
		*rez = ft_prnt_strjoin_prsn(lenprsn, *rez);
		free (tmp);
	}	
}

int  	count_precision(char *str)
{
	int i;
	int j;
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
			return (ft_atoi(precision));
		}
		i++;
	}
	return (0);
}

void	check_precision(char *str, char **rez)
{
	int prsn;

	prsn = count_precision(str);
//	if (prsn == 0 && (*rez)[0] == '0')
//		(*rez)[0] = '\0';
	if (((size_t)prsn > ft_strlen(*rez)) && (*rez)[0] != '-')
		make_precision(str, rez, prsn - ft_strlen(*rez));	
	if ((*rez)[0] == '-' && (size_t)prsn > ft_strlen(*rez) - 1)
		make_precision(str, rez, prsn - ft_strlen(*rez) + 1);
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
		if ((ft_isdigit(str[i]) && str[i] != '0') &&
			(i == 0 || str[i - 1] != '.'))
		{
			while (ft_isdigit(str[i]))
				width[j++] = str[i++];
			width[j] = '\0';
			break;
		}
		i++;	
	}
	wd = ft_atoi(width);
	return ((size_t)wd);
}

void	check_min_width(char *str, char **rez)
{
	int wd;

	wd = count_min_width(str);
	if ((size_t)wd > ft_strlen(*rez))
		make_width(rez, wd - ft_strlen(*rez));
}

void	make_minus_flag(char **rez)
{
	char *tmp;

//	if (str[ft_strlen(str) - 1] != 's' && str[ft_strlen(str) - 1] != 'S')
	if((*rez)[0] == ' ')
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
		*rez = ft_prnt_strjoin_smb(*rez, '+');
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
	int		i;
	char	*tmp;

	i = 0;
	tmp = *rez;
	while (str[i] != '\0')
		if ((str[i++] == '+') || (*rez)[0] == ' ') 
			return ;
	i = 0;
	while ((*rez)[i] != '\0')
		if ((*rez)[i++] == '-')
			return ;		
	if (ft_isdigit((*rez)[0]) && (*rez)[ft_strlen(*rez) - 1] != ' ')
	{
		*rez = ft_strjoin(" ", *rez);
		free(tmp);
	}
	if (ft_isdigit((*rez)[0]) && (*rez)[ft_strlen(*rez) - 1] == ' ')
	{ 
		*rez = ft_prnt_space_flag(*rez);
		free(tmp);
	}	
}

// x, X, o, O, p
void	make_sharp_flag(char *str, char **rez)
{
	char *tmp;

	tmp = *rez;
	if (str[ft_strlen(str) - 1] == 'x')
		*rez = ft_prnt_smsharp(*rez);
	else if (str[ft_strlen(str) - 1] == 'X')
		*rez = ft_prnt_bgsharp(*rez);
	else if (str[ft_strlen(str) - 1] == 'o')
		*rez = ft_prnt_strjoin_smb(*rez, '0');
	else if (str[ft_strlen(str) - 1] == 'O')
		*rez = ft_prnt_strjoin_smb(*rez, '0');
	free(tmp);
}
// [-] [+] [ ] [#] [0]
void	check_flags(char *str, char **rez)
{
	int i;

	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '-')
			make_minus_flag(rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '+' && (str[ft_strlen(str) - 1] == 'd' ||
			str[ft_strlen(str) - 1] == 'D' || str[ft_strlen(str) - 1] == 'i'))
			make_plus_flag(rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '0' && str[ft_strlen(str) - 1] != 'c' &&
			str[ft_strlen(str) - 1] != 'C' && str[ft_strlen(str) - 1] != 's' &&
			str[ft_strlen(str) - 1] != 'S' && str[ft_strlen(str) - 1] != 'p')
			make_zero_flag(str, rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == ' ' && (str[ft_strlen(str) - 1] == 'd' ||
			str[ft_strlen(str) - 1] == 'D' || str[ft_strlen(str) - 1] == 'i'))
			make_space_flag(str, rez);
	i = 0;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '#' && (str[ft_strlen(str) - 1] == 'o' ||
			str[ft_strlen(str) - 1] == 'O' || str[ft_strlen(str) - 1] == 'x' ||
			str[ft_strlen(str) - 1] == 'X'))
			make_sharp_flag(str, rez);
}

void	conv_d_i(char *str, char **rez, va_list ap)
{
	check_size_spec(str, rez, ap);
	if (*rez == NULL && str[ft_strlen(str) - 1] != 'D')
		*rez = ft_itoa(va_arg(ap, int));		
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'D')
		*rez = ft_prnt_itoall((long long)va_arg(ap, void*));
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
}

void	conv_u(char *str, char **rez, va_list ap)
{
	check_size_spec(str, rez, ap);
	if (*rez == NULL && str[ft_strlen(str) - 1] == 'u')
		*rez = ft_prnt_itoaui((unsigned int)va_arg(ap, void*));
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'U')
		*rez = ft_prnt_itoaull((unsigned long long)va_arg(ap, void*));
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
}

void	conv_ox(char *str, char **rez, va_list ap)
{
	check_size_spec(str, rez, ap);
	if (*rez == NULL && str[ft_strlen(str) - 1] == 'o')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 8, 0);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'x')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 16, 0);	
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'O')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 8, 1);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'X')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 16, 1);
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
}


// check d, D, i, u, U
int check_digit_conv(char *str, va_list ap)
{
	int i;
	char *rez;

	rez = NULL;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'D')
		conv_d_i(str, &rez, ap);
	if (str[i] == 'u' || str[i] == 'U')
		conv_u(str, &rez, ap);
//	else if (str[i] == 'D')
//		conv_bd(str, ap);
//	else if (str[i] == 'i')
//		conv_i(str, ap);
//	else if (str[i] == 'u')
//		conv_u(str, ap);
//	else (str[i] == 'U')
//		conv_bu(str, ap);
	ft_putstr(rez);
	free(rez);
	return (ft_strlen(rez));
}

// check o, O, x, X
int	check_octhex_conv(char *str, va_list ap)
{
	int i;

	char *rez;

	rez = NULL;
	i = ft_strlen(str) - 1;
	if (str[i] == 'o' || str[i] == 'O' || str[i] == 'x' || str[i] == 'X')
		conv_ox(str, &rez, ap);
//	else if (str[i] == 'O')
//		conv_bo(str, ap);
//	else if (str[i] == 'x')
//		conv_x(str, ap);
//	else if (str[i] == 'X')
//		conv_X(str, ap);
//	else (str[i] == 'p')
//		conv_p(str, ap);
	ft_putstr(rez);
	free(rez);
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
					ret = ret + check_octhex_conv(mainstr, ap);
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
	free(mainstr);
	return (ret);
}


/*
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
/*
}*/






































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

