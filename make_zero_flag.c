/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_zero_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 19:43:56 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/26 19:43:58 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
