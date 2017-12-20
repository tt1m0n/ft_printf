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
/*
static	void	ft_rev(char *s)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}


static	int		ft_intlen(void *n, int base)
{
	int			i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / base;
	}
	return (i);
}

static char		ft_conv(void *n, int base)
{
	unsigned int rez;

	rez = n % base;
	if (base == 8)
		return (rez + '0');
	else
	{
		if (rez <= 9)
			return (rez + '0');
		else if (rez > 9 && rez <= 15)
			return ('a' + rez - 10); 
	}
	return ('0');
}

static	void	ft_if(char *p, void *n, int base)
{
	int			i;

	i = 0;
	if (n == 0)
		p[i++] = '0';
	while (n != 0)
	{
		p[i++] = ft_conv(n, base);
		n = n / base;
	}
	p[i] = '\0';
}

char			*ft_prnt_itoaui_octhex(void *n, int base)
{
	char *p;

	p = (char*)malloc(ft_intlen(n, base) + 1);
	if (p == NULL)
		return (NULL);
	ft_if(p, n, base);
	ft_rev(p);
	return (p);
}
*/
int main ()
{
	int a;
	char b;
	long long c;
//	printf ("%s\n", ft_prnt_itoaui_octhex(12331312, 8));
	printf ("%p\n", &b);
	return (0);
}
