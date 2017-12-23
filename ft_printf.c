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
	ft_strclr(p);
	free(p);
}	

void	make_precision(char *str, char **rez, int lenprsn)
{
	int i;
	char *tmp;

	tmp = *rez;
	i = ft_strlen(str) - 1;
	if (str[i] != 'c' && str[i] != 'C' && str[i] != 'p' && str[i] != '%')
	{		
		*rez = ft_prnt_strjoin_prsn(lenprsn, *rez);
		free (tmp);
	}	
}

void	make_precision_str(char **rez, int len)
{
	char *tmp;

	tmp = *rez;
	*rez = ft_prnt_prs_str(len, *rez);
	free(tmp);
}

int  	count_precision(char *str, char *rez)
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
			if (str[i - 1] == '.' && (str[i] == '0' || ft_isalpha(str[i])) && rez[0] == '0')
				return (-1);
			if (str[i - 1] == '.' && (str[i] == '0' || ft_isalpha(str[i])) &&
				(rez[0] == '+' || rez[0] == '-'))
				if (rez[1] == '0')
					return (-1);
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

	prsn = count_precision(str, *rez);
	if (prsn == -1)
		(*rez)[0] = '\0';
	else
	{	
		if (((size_t)prsn > ft_strlen(*rez)) && (*rez)[0] != '-' &&
			str[ft_strlen(str) - 1] != 's')
			make_precision(str, rez, prsn - ft_strlen(*rez));	
		if ((*rez)[0] == '-' && (size_t)prsn > ft_strlen(*rez) - 1 &&
			str[ft_strlen(str) - 1] != 's')
			make_precision(str, rez, prsn - ft_strlen(*rez) + 1);
		if (((size_t)prsn < ft_strlen(*rez)) && str[ft_strlen(str) - 1] == 's' &&
			prsn != 0)	
			make_precision_str(rez, prsn);
	}	
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
	{	
		if ((*rez)[0] == '\0' && str[ft_strlen(str) - 1] != 's' &&
			str[ft_strlen(str) - 1] != 'x' && str[ft_strlen(str) - 1] != 'X' &&
			str[ft_strlen(str) - 1] != 'o' && str[ft_strlen(str) - 1] != 'O' &&
			str[ft_strlen(str) - 1] != 'd' && str[ft_strlen(str) - 1] != 'D' &&
			str[ft_strlen(str) - 1] != 'i' && str[ft_strlen(str) - 1] != 'u' &&
			str[ft_strlen(str) - 1] != 'U')
			make_width(rez, wd - 1 - ft_strlen(*rez));
		else
			make_width(rez, wd - ft_strlen(*rez));
	}	
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
	if (ft_isdigit((*rez)[0]) && (*rez)[ft_strlen(*rez) - 1] != ' ' && (*rez)[0] != '0')
	{
		*rez = ft_strjoin(" ", *rez);
		free(tmp);
	}
	if (ft_isdigit((*rez)[0]) && ((*rez)[ft_strlen(*rez) - 1] == ' ' || (*rez)[0] == '0'))
	{ 
		*rez = ft_prnt_space_flag(*rez);
		free(tmp);
	}	
}

char *make_sharpwith_zero(char *str, char *rez)
{
	if (str[ft_strlen(str) - 1] == 'o' || str[ft_strlen(str) - 1] == 'O')
		return(ft_prnt_strjoin_smb(rez, '0'));	
	else if (str[ft_strlen(str) - 1] == 'x' || str[ft_strlen(str) - 1] == 'X')
		return(ft_prnt_addsharp(rez, 'x'));
//	else if (str[ft_strlen(str) - 1] == 'x')
//		*rez = ft_prnt_smsharp(*rez);
//	else (str[ft_strlen(str) - 1] == 'X')
//		*rez = ft_prnt_bgsharp(*rez);
	return (NULL);
}

// x, X, o, O, p
void	make_sharp_flag(char *str, char **rez)
{
	char *tmp;

	tmp = *rez;
	if ((*rez)[0] == '0' && (*rez)[1] != '\0' && (*rez)[1] != ' ')
		*rez = make_sharpwith_zero(str, *rez);
	else
	{	
		if (str[ft_strlen(str) - 1] == 'x')
			*rez = ft_prnt_smsharp(*rez);
		else if (str[ft_strlen(str) - 1] == 'X')
			*rez = ft_prnt_bgsharp(*rez);
		else if (str[ft_strlen(str) - 1] == 'o')
			*rez = ft_prnt_strjoin_smb(*rez, '0');
		else if (str[ft_strlen(str) - 1] == 'O')
			*rez = ft_prnt_strjoin_smb(*rez, '0');
	}	
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

char	*add_percent()
{
	char *p;

	if (!(p = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	p[0] = '%';
	p[1] = '\0';
	return (p);
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
	else if (*rez == NULL && str[ft_strlen(str) - 1] == '%')
		*rez = add_percent();
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'c')
	{	
		*rez = (char*)malloc(sizeof(char) * 2);
		(*rez)[0] = (char)va_arg(ap, void*);
		(*rez)[1] = '\0';
	}
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
}

// check d, D, i, u, U
int check_digit_conv(char *str, va_list ap)
{
	int i;
	int len;
	char *rez;

	rez = NULL;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'D')
		conv_d_i(str, &rez, ap);
	else if (str[i] == 'u' || str[i] == 'U')
		conv_u(str, &rez, ap);


	ft_putstr(rez);
	len = ft_strlen(rez);
	ft_strclr(rez);
	free(rez);
	return (len);
}

int	print_flag_c (char *rez)
{
	int i;

	i = 0;
	while (rez[i] != '\0')
	{	
		if (rez[i] != ' ')
		{	
			ft_putstr(rez);
			return (0);
			break ;
		}	
		i++;
	}		
	if (rez[i] == '\0')
	{	
		write (1, rez, ft_strlen(rez) + 1);
		return (1);
	}
	return(0);
}

// check o, O, x, X
int	check_octhex_conv(char *str, va_list ap)
{
	int i;
	int len;
	char *rez;

	rez = NULL;
	len = 0;
	i = ft_strlen(str) - 1;
	if (str[i] == 'o' || str[i] == 'O' || str[i] == 'x' ||
		str[i] == 'X' || str[i] == '%' || str[i] == 'c')
		conv_ox(str, &rez, ap);
	if (str[i] == 'c')
		len = print_flag_c(rez);
	else
		ft_putstr(rez);
	len = len + ft_strlen(rez);
	ft_strclr(rez);
	free(rez);
	return (len);
}

char *write_string(va_list ap)
{
	char *p;
	char *str;

	p = ft_memalloc(1000);
	p = ft_strcpy(p, va_arg(ap, char*));
	if (p == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * ft_strlen(p) + 1);
	ft_memcpy(str, p, ft_strlen(p) + 1);
	free(p);
	return (str);
}

int check_s_conv(char *str, va_list ap)
{
	int len;
	char *rez;

	if (!(rez = write_string(ap)))
	{
		ft_putstr("(null)");	
		return (6);
	}	
	check_precision(str, &rez);
	check_min_width(str, &rez);
	check_flags(str, &rez);

	ft_putstr(rez);
	len = ft_strlen(rez);
	ft_strclr(rez);
	free(rez);
	return (len);
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
			while(sign && format[i] != '\0')
			{	
				if (format[i] == 'd' || format[i] == 'D' ||
					format[i] == 'i' || format[i] == 'u' ||
					format[i] == 'U')
				{	
					mainstr[j] = format[i];
					sign = 0;
					ret = ret + check_digit_conv(mainstr, ap);
				}
				if (format[i] == 'o' || format[i] == 'O' ||
					format[i] == 'x' || format[i] == 'X' ||
					format[i] == 'p' || format[i] == '%' || 
					format[i] == 'c')

				{
					mainstr[j] = format[i];
					sign = 0;
					ret = ret + check_octhex_conv(mainstr, ap);
				}
				if (format[i] == 's')
				{
					mainstr[j] = format[i];
					sign = 0;
					ret = ret + check_s_conv(mainstr, ap);
				}
				else	
					mainstr[j] = format[i];
				i++;
				j++;
			}
		ft_strclr(mainstr);
		}
		if(format[i] != '\0' && format[i] != '%')
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

