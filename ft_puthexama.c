/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaM.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:28:32 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 15:13:34 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

unsigned int	ft_puthexama(unsigned int nb)
{
	unsigned int	count;

	count = 0;
	if (nb >= 0 && nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else if (nb > 9 && nb < 16)
		count += ft_putchar(nb + 55);
	else if (nb >= 16)
	{
		count += ft_puthexama(nb / 16);
		count += ft_puthexama(nb % 16);
	}
	return (count);
}
