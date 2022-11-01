/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:24:04 by aatki             #+#    #+#             */
/*   Updated: 2022/11/01 22:51:33 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_swich(const char *fmt, int i, va_list	ap)
{
	int	cmpt;

	cmpt = 0;
	if (fmt[i] == 'u')
		cmpt += ft_putnbr_ns(va_arg(ap, int));
	if (fmt[i] == 'c')
		cmpt += ft_putchar(va_arg(ap, int));
	if (fmt[i] == 'd' || fmt[i] == 'i')
		cmpt += ft_putnbr(va_arg(ap, int));
	if (fmt[i] == 'p')
		cmpt += ft_put_address(va_arg(ap, unsigned long *));
	if (fmt[i] == 's')
		cmpt += ft_putstr(va_arg(ap, char *));
	if (fmt[i] == 'x')
		cmpt += ft_put_hexadicimal(va_arg(ap, int));
	if (fmt[i] == 'X')
		cmpt += ft_put_hexadicimall(va_arg(ap, int));
	if (fmt[i] == '%')
		cmpt += ft_putchar('%');
	return (cmpt);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	va_list	ap;
	int		cmpt;

	i = 0;
	cmpt = 0;
	va_start (ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == '%' || fmt[i] == 'u' || fmt[i] == 'c' || \
				fmt[i] == 'd' || fmt[i] == 'i' || fmt[i] == 'p' || \
				fmt[i] == 's' || fmt[i] == 'x' || fmt[i] == 'X')
				cmpt += ft_swich(fmt, i, ap);
		}
		else
			cmpt += ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (cmpt);
}
