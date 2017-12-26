/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 19:00:26 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/26 19:00:27 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_char(char c)
{
	if (c == 'd' || c == 'D' || c == 'i' || c == 'u' || c == 'U' || c == 'o' ||
		c == 'O' || c == 'x' || c == 'X' || c == 'p' || c == '%' || c == 'c' ||
		c == 'C' || c == 's' || c == 'S')
		return (0);
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		return (0);
	if (c == '-' || c == '+' || ft_isdigit(c) || c == '#' || c == ' ' || c == '.')
		return (0);
	return (1);
}
