/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_giveformat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:59:22 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 14:22:39 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_giveformat(char c, va_list ap)
{
	int	j;

	j = 0;
	if (c == 'c')
		j += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		j += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		j += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		j += ft_putnbru(va_arg(ap, unsigned int));
	else if (c == 'x')
		j += ft_puthexa(va_arg(ap, size_t));
	else if (c == 'X')
		j += ft_puthexama(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		j += ft_putstr("0x");
		j += ft_putadd(va_arg(ap, size_t));
	}
	else
		j += ft_putchar(c);
	return (j);
}
