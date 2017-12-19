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

#include "libft/libft.h"
#include <stdio.h>

static char		*ft_prnt_add(char *p, char const *s)
{
	int i;

	i = 0;
	if (!(p = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	if (ft_isdigit(s[0]))
	{
		p[i++] = '+';
		while (*(s + 1) != '\0')
			p[i++] = *(s++);
	}
	else
	{
		while(!(ft_isdigit(*(s + 1))))
			p[i++] = *(s++);
		p[i++] = '+';
		while (*s != '\0')
		{	
			if (ft_isdigit(*s))
				p[i++] = *s;
			s++;
		}	
	}
	p[i] = '\0';	
	return (p);
}	

char			*ft_prnt_strjoin_plus(char const *s)
{
	int		i;
	int		count; 
	char	*p;

	i = 0;
	count = 0;
	p = NULL;
	if (ft_isdigit(s[0]) && ft_isdigit(s[ft_strlen(s) - 1]))
	{	
		p = (char*)malloc(ft_strlen(s) + 2);
		if (p == NULL)
			return (NULL);
		p[i++] = '+';
		while (*s != '\0')
			p[i++] = *(s++);
		p[i] = '\0';
	}
	else 
		p = ft_prnt_add(p, s);
	return (p);	
}

int main ()
{
	printf("%s\n", ft_prnt_strjoin_plus("  123"));
	return (0);
}