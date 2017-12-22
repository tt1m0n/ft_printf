/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnt_prs_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 16:12:52 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/22 16:12:55 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_prnt_prs_str(int len, char const *str)
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
