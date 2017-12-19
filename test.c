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

char				*ft_prnt_space_flag(char const *str)
{
	int		i;
	char	*p;

	i = 0;
	p = (char*)malloc(ft_strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	p[0] = ' ';
	while (str[i + 1] != '\0')
	{	
		p[i + 1] = str[i];
		i++;
	}
	p[i + 1] = '\0';
	return (p);		
}
int main ()
{
	printf("%s\n", ft_prnt_space_flag("123   "));
	return (0);
}