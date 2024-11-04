/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlwin <wlwin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:33:57 by wlwin             #+#    #+#             */
/*   Updated: 2024/09/19 13:19:16 by wlwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c == 0)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (c[i] != 0)
	{
		ft_putchar(c[i]);
		i++;
	}
	return (i);
}
