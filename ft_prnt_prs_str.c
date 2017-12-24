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
#include <stdio.h>

char	*prnt_prc_unicode(int len, char const *str)
{
	int i;
	int j;
	int count;
	char *p;

	i = 0;
	j = 0;
	while (((unsigned char)str[i]/128 == 1 && len > 0) ||
		(unsigned char)str[i]/128 == 0)
	{
		count = 1; 
		if ((unsigned char)str[i]/192 == 1)
		{
			count = count + 1;
			if ((unsigned char)str[i]/224 == 1)
			{
				count = count + 1;
				if ((unsigned char)str[i]/240 == 1)
					count = count + 1;
			}	
		}
		if (len > count)
			i = i + count;
		len = len - count;
	}
	if (!(p = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (j < i)
	{	
		p[j] = str[j];
		j++;
	}	
	p[j] = '\0';
	return (p);
}

char	*ft_prnt_prs_str(int len, char const *str)
{
	int		i;
	char	*p;

	i = 0;
	if (((unsigned char)str[i]/128) == 0)
	{	
		p = (char*)malloc(sizeof(char) * len + 1);
		if (p == NULL)
			return (NULL);
		while (len-- > 0)
		{
			p[i] = str[i];
			i++;
		}
		p[i] = '\0';
	}
	else 
		p = prnt_prc_unicode (len, str);
	return (p);
}
