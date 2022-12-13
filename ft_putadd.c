/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:29:35 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 14:30:56 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_putadd(size_t nb)
{
	size_t	l;

	l = 0;
	if (nb >= 0 && nb <= 9)
	{
		l += ft_putchar(nb + '0');
	}
	else if (nb > 9 && nb < 16)
		l += ft_putchar(nb + 87);
	else if (nb >= 16)
	{
		l += ft_putadd(nb / 16);
		l += ft_putadd(nb % 16);
	}
	return (l);
}
