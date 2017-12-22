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

char	*ft_prnt_strjoin_width(int len, char const *s2)
{
	int		i;
	char	*p;

	i = 0;
	p = (char*)malloc(ft_strlen(s2) + len + 1);
	if (p == NULL)
		return (NULL);
	while (len-- > 0)
		p[i++] = ' ';
	while (*s2 != '\0')
		p[i++] = *(s2++);
	p[i] = '\0';
	return (p);
}