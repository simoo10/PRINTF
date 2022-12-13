/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:01:04 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 14:32:38 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

unsigned int	ft_puthexa(unsigned int nb)
{
	unsigned int	l;

	l = 0;
	if (nb >= 0 && nb <= 9)
	{
		l += ft_putchar(nb + '0');
	}
	else if (nb > 9 && nb < 16)
		l += ft_putchar(nb + 87);
	else if (nb >= 16)
	{
		l += ft_puthexa(nb / 16);
		l += ft_puthexa(nb % 16);
	}
	return (l);
}
