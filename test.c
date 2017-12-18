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

int	ft_prnt_strstr(const char *haystack, const char *needle)
{
	int len;

	len = ft_strlen(needle);
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && (*haystack != '\0'))
			if (ft_strncmp(haystack, needle, len) == 0)
				return (1);
		haystack++;
	}
	return (0);
}

int main ()
{
	printf("%d\n", ft_prnt_strstr("-08-+.12zd", "zd"));
	return (0);
}