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

#include "copylibft/libft.h"
#include <stdio.h>

char	*ft_prnt_prs(int len, char const *str)
{
	int		i;
	char	*p;

	i = 0;
	p = (char*)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (len-- > 0)
	{	
		p[i] = str[i];
		i++;
	}	
	p[i] = '\0';
	return (p);
}

int main ()
{
	printf ("%s\n", ft_prnt_strjoin_width(5, "fakamakadon"));
	return (0);
}