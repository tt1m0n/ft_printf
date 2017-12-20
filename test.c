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

static	int		ft_intlen(long long n)
{
	int			i;
	long long	sign;

	i = 0;
	if (n == 0)
		i = 1;
	if (n == -9223372036854775807 - 1)
		return (20);
	if ((sign = n) < 0)
		n = -n;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	if (sign < 0)
		i++;
	return (i);
}

static	void	ft_if(char *p, long long n)
{
	int			i;
	long long	sign;

	i = 0;
	if ((sign = n) < 0)
		n = -n;
	if (n == 0)
		p[i++] = '0';
	while (n != 0)
	{
		p[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign < 0)
		p[i++] = '-';
	p[i] = '\0';
}

char			*ft_prnt_itoall(long long n)
{
	char *p;

	p = (char*)malloc(ft_intlen(n) + 1);
	if (p == NULL)
		return (NULL);
	if (n == -9223372036854775807 - 1)
	{
		ft_strcpy(p, "-9223372036854775808");
		return (p);
	}
	ft_if(p, n);
	ft_rev(p);
	return (p);
}

int main ()
{
	printf ("%s\n", ft_prnt_itoall(4294967295));
	return (0);
}
