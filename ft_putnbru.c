/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:09:34 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 14:42:16 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static unsigned int numlen(int n)
// {
//     int len;

//     len = 0;
//     if (n < 0)
//     {
//         n = -n;
//         len++;
//     }
//     if (n == 0)
//         len++;
//     while (n != 0)
//     {
//         n = n / 10;
//         len++;
//     }
//     return (len);
// }

unsigned int	ft_putnbru(unsigned int nb)
{
	unsigned int	count;

	count = 0;
	if (nb >= 0 && nb <= 9)
	{
		count += ft_putchar(nb + '0');
	}
	else if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count);
}
