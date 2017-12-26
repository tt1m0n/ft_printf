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

#include "libft.h"
#include <stdio.h>

void	size_spec_hh(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')
		*rez = ft_itoa((char)va_arg(ap, void*));
	else if (str[i] == 'u')
		*rez = ft_itoa((unsigned char)va_arg(ap, void*));
	else if (str[i] == 'o')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 8, 0);
	else if (str[i] == 'x')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 16, 0);
	else if (str[i] == 'O')
		*rez = ft_prnt_itoaus_octhex((unsigned short)va_arg(ap, void*), 8, 1);
	else if (str[i] == 'X')
		*rez = ft_prnt_itoaui_octhex((unsigned char)va_arg(ap, void*), 16, 1);
}

void	size_spec_ll(char *str, char **rez, va_list ap)
{
	int i;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i')
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
	if (str[i] == 'd' || str[i] == 'i')
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
	if (str[i] == 'd' || str[i] == 'i')
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
	if (str[i] == 'd' || str[i] == 'i')
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

int		use_ss_long(char *str, char **rez, va_list ap, char *p)
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
	ft_strclr(p, 6);
	free(p);
}	

int check_char(char c)
{
	if (c == 'd' || c == 'D' || c == 'i' || c == 'u' || c == 'U' || c == 'o' ||
		c == 'O' || c == 'x' || c == 'X' || c == 'p' || c == '%' || c == 'c' ||
		c == 'C' || c == 's' || c == 'S')
		return (0);
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		return (0);
	if (c == '-' || c == '+' || ft_isdigit(c) || c == '#' || c == ' ' || c == '.')
		return (0);
	return (1);
}

void	make_precision(char *str, char **rez, int lenprsn)
{
	int		i;
	char	*tmp;

	tmp = *rez;
	i = ft_strlen(str) - 1;
	if (str[i] != 'c' && str[i] != 'C' && str[i] != '%')
	{
		*rez = ft_prnt_strjoin_prsn(lenprsn, *rez);
		free(tmp);
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
	char precision[20];

	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] == '.')
		{
			i++;
			if (str[i - 1] == '.' && ((str[i] == '0' || ft_isalpha(str[i])) && rez[0] == '0'))
				return (-1);
			if (str[i - 1] == '.' && (str[i] == '0' || ft_isalpha(str[i])) &&
				(rez[0] == '+' || rez[0] == '-'))
				if (rez[1] == '0')
					return (-1);
			if (str[i - 1] == '.' && !ft_isdigit(str[i]) &&
				(str[ft_strlen(str) - 1] == 's' || str[ft_strlen(str) - 1] == 'S'))
				return (-1);
			while (ft_isdigit(str[i]))
				precision[j++] = str[i++];
			precision[j] = '\0';
			return (ft_atoi(precision));
		}
	return (0);
}

void	check_precision(char *str, char **rez)
{
	int		prsn;
	size_t	lenrez;
	size_t	lenstr;

	lenrez = ft_strlen(*rez);
	lenstr = ft_strlen(str) - 1;
	prsn = count_precision(str, *rez);
	if (prsn == -1)
		(*rez)[0] = '\0';
	else
	{
		if (((size_t)prsn > lenrez) && (*rez)[0] != '-' &&
			str[lenstr] != 's')
			make_precision(str, rez, prsn - lenrez);
		if ((*rez)[0] == '-' && (size_t)prsn > lenrez - 1 &&
			str[lenstr] != 's')
			make_precision(str, rez, prsn - lenrez + 1);
		if (((size_t)prsn < lenrez) && (str[lenstr] == 's' ||
			str[lenstr] == 'S') && prsn != 0)
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
	int		i;
	int		j;
	int		wd;
	char	width[11];

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
	return (wd);
}

void	check_min_width(char *str, char **rez)
{
	int		wd;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) - 1;
	wd = count_min_width(str);
	if (*rez == NULL)
	{
		*rez = ft_memalloc(10);
		while (i < wd - 1)
			(*rez)[i++] = ' ';
		return ;
	}
	if ((size_t)wd > ft_strlen(*rez))
	{
		if ((*rez)[0] == '\0' && str[ft_strlen(str) - 1] != 's' &&
			str[len] != 'x' && str[len] != 'X' && str[len] != 'o' && str[len] != 'O' &&
			str[len] != 'd' && str[len] != 'D' && str[len] != 'i' && str[len] != 'u' &&
			str[len] != 'U' && str[len] != 'S')
			make_width(rez, wd - 1 - ft_strlen(*rez));
		else
			make_width(rez, wd - ft_strlen(*rez));
	}
}

void	make_minus_flag(char **rez)
{
	char *tmp;

	if((*rez)[0] == ' ')
	{
		tmp = *rez;
		*rez = ft_prnt_replace_spc(*rez);
		free(tmp);
	}
}

void	make_plus_flag(char **rez)
{
	int		i;
	char	*tmp;

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
	int		i;
	char	*tmp;
	size_t	len;

	i = 0;
	tmp = *rez;
	len = ft_strlen(str) - 1;
	while (str[i] != '\0')
	{
		if ((str[i] == '.' || str[i] == '-') && str[len] != 'c' && str[len] != 's' &&
			str[len] != '%' && (check_char(str[len]) == 0) && str[len] != 'S')
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
	size_t	len;

	i = 0;
	tmp = *rez;
	len = ft_strlen(*rez) - 1;
	while (str[i] != '\0')
		if ((str[i++] == '+') || (*rez)[0] == ' ') 
			return ;
	i = 0;
	while ((*rez)[i] != '\0')
		if ((*rez)[i++] == '-')
			return ;
	if (ft_isdigit((*rez)[0]) && (*rez)[len] != ' ' && (*rez)[0] != '0')
	{
		*rez = ft_strjoin(" ", *rez);
		free(tmp);
	}
	if (ft_isdigit((*rez)[0]) && ((*rez)[len] == ' ' || (*rez)[0] == '0'))
	{
		*rez = ft_prnt_space_flag(*rez);
		free(tmp);
	}
}

char *make_sharpwith_zero(char *str, char *rez)
{
	size_t	len;

	len = ft_strlen(str) - 1;
	if (str[len] == 'o' || str[len] == 'O')
		return(ft_prnt_strjoin_smb(rez, '0'));
	else if (str[len] == 'x' || str[len] == 'X' || str[len] == 'p')
		return(ft_prnt_addsharp(rez, 'x'));
	return (NULL);
}

void	make_sharp_flag(char *str, char **rez)
{
	char	*tmp;
	size_t	len;

	tmp = *rez;
	len = ft_strlen(str) - 1;
	if ((*rez)[0] == '0' && (*rez)[1] != '\0' && (*rez)[1] != ' ' &&
		(count_precision(str, *rez) == 0))
		*rez = make_sharpwith_zero(str, *rez);
	else
	{
		if (str[ft_strlen(str) - 1] == 'x')
			*rez = ft_prnt_smsharp(*rez);
		else if (str[len] == 'p')
			*rez = ft_prnt_sharp_p(*rez);	
		else if (str[len] == 'X')
			*rez = ft_prnt_bgsharp(*rez);
		else if (str[len] == 'o')
			*rez = ft_prnt_strjoin_smb(*rez, '0');
		else if (str[len] == 'O')
			*rez = ft_prnt_strjoin_smb(*rez, '0');
	}
	free(tmp);
}

void	check_minus_plus(char *str, char **rez)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i] != '\0')
		if (str[i++] == '-')
			make_minus_flag(rez);
	i = 0;
	while (str[i] != '\0')
		if (str[i++] == '+' && (str[len] == 'd' ||
			str[len] == 'D' || str[len] == 'i'))
			make_plus_flag(rez);
}

void	check_another_flag(char *str, char **rez)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i] != '.' && !(ft_isalpha(str[i]))\
		&& (!(ft_isdigit(str[i])) || str[i] == '0'))
		if (str[i++] == '0' && str[len] != 'C')
			make_zero_flag(str, rez);
	i = 0;
	while (str[i] != '\0')
		if (str[i++] == ' ' && (str[ft_strlen(str) - 1] == 'd' ||
			str[len] == 'D' || str[len] == 'i'))
			make_space_flag(str, rez);
	i = 0;
	while (str[i] != '\0')
		if (str[i++] == '#' && (str[len] == 'o' || str[len] == 'O' ||
			str[len] == 'x' || str[len] == 'X'))
			make_sharp_flag(str, rez);
}


void	check_flags(char *str, char **rez)
{
	check_minus_plus(str, rez);
	check_another_flag(str, rez);	
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

void	print_2_byte(int mask1, int n, char **rez)
{
	if (!(*rez = (char*)malloc(sizeof(char) * 3)))
		return ;
	(*rez)[0] = mask1>>8|n>>6;
	(*rez)[1] = (n&63)|128;
	(*rez)[2] = '\0';
}

void	print_3_byte(int mask2, int n, char **rez)
{
	if (!(*rez = (char*)malloc(sizeof(char) * 4)))
		return ;
	(*rez)[0] = mask2>>16|n>>12;
	(*rez)[1] = ((n>>6)&63)|128;
	(*rez)[2] = (n&63)|128;
	(*rez)[3] = '\0';
}

void	print_4_byte(int mask3, int n, char **rez)
{
	if (!(*rez = (char*)malloc(sizeof(char) * 4)))
		return ;
	(*rez)[0] = mask3>>24|n>>18;
	(*rez)[1] = ((n>>12)&63)|128;
	(*rez)[2] = ((n>>6)&63)|128;
	(*rez)[3] = (n&63)|128;
	(*rez)[4] = '\0';
}

void	print_unicode(unsigned int n, char **rez)
{
    unsigned int mask1 = 49280;
    unsigned int mask2 = 14712960;
  	unsigned int mask3 = 4034953344;

    if (n <= 127)
    {	
    	if (!(*rez = (char*)malloc(sizeof(char) * 2)))
    		return ;
    	(*rez)[0] = n;
    	(*rez)[1] = '\0';
    }
	else if (n > 127 && n <= 2047)
		print_2_byte(mask1, n, rez);
 	else if (n > 2047 && n <= 65535)
 		print_3_byte(mask2, n, rez);
    else
    	print_4_byte(mask3, n, rez);
}

void	check_c_conv(char *str, char **rez, va_list ap)
{
	if (ft_prnt_strstr(str, "l") || str[ft_strlen(str) - 1] == 'C')
		print_unicode((unsigned int)va_arg(ap, void*), rez);
	else
	{	
		*rez = (char*)malloc(sizeof(char) * 2);
		(*rez)[0] = (char)va_arg(ap, void*);
		(*rez)[1] = '\0';
	}	
}

void	read_if_nosize(char *str, char **rez, va_list ap)
{
	if (*rez == NULL && str[ft_strlen(str) - 1] == 'o')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 8, 0);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'x')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 16, 0);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'O')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 8, 1);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'X')
		*rez = ft_prnt_itoaui_octhex((unsigned int)va_arg(ap, void*), 16, 1);
	else if (*rez == NULL && str[ft_strlen(str) - 1] == '%')
		*rez = add_percent();
	else if (*rez == NULL && str[ft_strlen(str) - 1] == 'p')
		*rez = ft_prnt_itoaull_octhex((unsigned long long)va_arg(ap, void*), 16, 0);
}

char	conv_ox(char *str, char **rez, va_list ap)
{
	char c;

	c = '\0';
	check_size_spec(str, rez, ap);
	read_if_nosize(str, rez, ap);
	if (*rez == NULL && (str[ft_strlen(str) - 1] == 'c' ||
		str[ft_strlen(str) - 1] == 'C'))
	{
		check_c_conv(str, rez, ap);
		c = (*rez)[0];
	}
	check_precision(str, rez);
	check_min_width(str, rez);
	check_flags(str, rez);
	if (str[ft_strlen(str) - 1] == 'p')
		make_sharp_flag(str, rez);
	return (c);
}

int				check_digit_conv(char *str, va_list ap, int *n)
{
	int		i;
	int		len;
	char	*rez;

	rez = NULL;
	*n = 0;
	i = ft_strlen(str) - 1;
	if (str[i] == 'd' || str[i] == 'i' || str[i] == 'D')
		conv_d_i(str, &rez, ap);
	else if (str[i] == 'u' || str[i] == 'U')
		conv_u(str, &rez, ap);
	len = ft_strlen(rez);
	write(1, rez, len);
	ft_strclr(rez, ft_strlen(rez));
	free(rez);
	return (len);
}

int				print_flag_c (char *rez, char c)
{
	int i;

	i = 0;
	while (rez[i] != '\0')
	{
		if ((rez[i] != ' ' && rez[i] != '0') || c != 0)
		{
			write(1, rez, ft_strlen(rez));
			return (0);
			break ;
		}
		i++;
	}
	if (rez[i] == '\0' || rez[i] == '0')
	{
		write (1, rez, ft_strlen(rez) + 1);
		return (1);
	}
	return(0);
}

int				check_octhex_conv(char *str, va_list ap, int *n)
{
	int		i;
	int		len;
	char	*rez;
	char 	c;

	rez = NULL;
	len = 0;
	*n = 0;
	i = ft_strlen(str) - 1;
	if (str[i] == 'o' || str[i] == 'O' || str[i] == 'x' || str[i] == 'p' ||
		str[i] == 'X' || str[i] == '%' || str[i] == 'c' || str[i] == 'C')
		c = conv_ox(str, &rez, ap);
	if (str[i] == 'c' || str[i] == 'C')
		len = print_flag_c(rez, c);
	else
		write(1, rez, ft_strlen(rez));
	len = len + ft_strlen(rez);
	ft_strclr(rez, ft_strlen(rez));
	free(rez);
	return (len);
}

char			*write_string(va_list ap)
{
	char	*p;
	char	*tmp;
	int		len;

	p = NULL;
	tmp = va_arg(ap, char*);
	if (!tmp)
		return (0);
	len = ft_strlen(tmp);
	if (!(p = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	ft_memcpy(p, tmp, len + 1);
	return (p);
}

unsigned int	*ft_intcpy(unsigned int *p, unsigned int *arr)
{
	int i;

	i = 0;
	if (arr == 0)
		return (0);
	while (arr[i] != 0)
	{
		p[i] = arr[i];
		i++;
	}
	p[i] = 0;
	return (p);
}

void			write_rez_unicode(unsigned int *p, char **rez)
{
	int		i;
	char	*del;
	char	*tmp;

	i = 0;
	while (p[i] != 0)
	{
		del = *rez;
		print_unicode(p[i], &tmp);
		if (*rez == NULL)
		{
			*rez = ft_memalloc(ft_strlen(tmp) + 1);
			*rez = ft_strcpy(*rez, tmp);
		}
		else
			*rez = ft_strjoin(*rez, tmp);
		free(tmp);
		if (del != NULL)
			free(del);
		i++;
	}
}

void		read_unicode_string(char **rez, va_list ap)
{
	unsigned int	*p;

	if (!(p = (unsigned int*)malloc(sizeof(int) * 1000000)))
		return ;
	p = ft_intcpy(p, (unsigned int*)va_arg(ap, void*));
	if (p == 0)
	{
		free(p);
		return ;
	}
	if (p[0] == 0)
	{
		if (!(*rez = (char*)malloc(sizeof(char) * 1)))
			return ;
		(*rez)[0] = '\0';
	}
	write_rez_unicode(p, rez);
	free(p);
}

void	writenull_for_s(char **rez)
{
	if (!(*rez = (char*)malloc(sizeof(char) * 7)))
		return ;
	(*rez)[0] = '(';
	(*rez)[1] = 'n';
	(*rez)[2] = 'u';
	(*rez)[3] = 'l';
	(*rez)[4] = 'l';
	(*rez)[5] = ')';
	(*rez)[6] = '\0';
}

int check_s_conv(char *str, va_list ap, int *n)
{
	int len;
	char *rez;

	rez = NULL;
	*n = 0;
	if (ft_prnt_strstr(str, "l") || str[ft_strlen(str) - 1] == 'S')
		read_unicode_string(&rez, ap);
	else 
	{
		if (!(rez = write_string(ap)))
			writenull_for_s(&rez);
	}
	if (rez == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	check_precision(str, &rez);
	check_min_width(str, &rez);
	check_flags(str, &rez);
	len = ft_strlen(rez);
	write(1, rez, len);
	ft_strclr(rez, len);
	free(rez);
	return (len);
}

int check_inv_char(char *str, char p, int *n)
{
	int len;
	char *rez;

	*n = 0;
	if (!(rez = (char*)malloc(sizeof(char) * 2)))
		return (0);
	rez[0] = p;
	rez[1] = '\0';
	check_min_width(str, &rez);
	check_flags(str, &rez);
	len = ft_strlen(rez);
	write(1, rez, len);
	ft_strclr(rez, len);
	free(rez);
	return (len);
}

int	check_conversion(const char *s, int i, va_list ap, int *ret)
{
	int j;
	int sign;
	char *mainstr;

	j = 0;
	sign = 1;
	if (!(mainstr = (char*)malloc(sizeof(char) * 50)))
		return (0);
	ft_strclr(mainstr, 50);
	while(sign && s[i] != '\0')
	{	
		mainstr[j++] = s[i];
		if (s[i] == 'd' || s[i] == 'D' || s[i] == 'i' || s[i] == 'u' || s[i] == 'U')
			*ret = *ret + check_digit_conv(mainstr, ap, &sign);
		if (s[i] == 'o' || s[i] == 'O' || s[i] == 'x' || s[i] == 'X' ||
			s[i] == 'p' || s[i] == '%' || s[i] == 'c' || s[i] == 'C')
			*ret = *ret + check_octhex_conv(mainstr, ap, &sign);
		if (s[i] == 's' || s[i] == 'S')
			*ret = *ret + check_s_conv(mainstr, ap, &sign);
		if (check_char(s[i]))
			*ret = *ret + check_inv_char(mainstr, s[i], &sign);
		i++;
	}
	free(mainstr);
	return (i);
}

int		check_format(const char *s, va_list ap)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			i = check_conversion(s, i, ap, &ret);
		}
		if(s[i] != '\0' && s[i] != '%')
		{	
			write(1, &s[i++], 1);
			ret++;
		}
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int ret;
	va_list ap;
	
	ret = 0;
	va_start(ap, format);
	ret = check_format(format, ap);
	va_end(ap);	
	return (ret);
}
