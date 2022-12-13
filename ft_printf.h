/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:25:07 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/04 15:19:24 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include<stdarg.h>

int				ft_printf(const char *s, ...);
size_t			ft_putchar(char c);
int				ft_putstr(char *s);
unsigned int	ft_puthexama(unsigned int nb);
unsigned int	ft_puthexa(unsigned int nb);
int				ft_putnbr(int nb);
int				ft_giveformat(char c, va_list ap);
unsigned int	ft_putnbru(unsigned int nb);
size_t			ft_putadd(size_t nb);

#endif
