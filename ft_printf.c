/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:13:56 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 18:49:28 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
			count += ft_giveformat(s[++i], ap);
		else if (s[i] != '%' && s[i] != '\0')
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
