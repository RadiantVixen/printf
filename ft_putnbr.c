/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:00:15 by aatki             #+#    #+#             */
/*   Updated: 2022/11/01 22:56:31 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	cmpt;

	cmpt = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * (-1);
		cmpt++;
	}
	if (n > 9)
	{
		cmpt += ft_putnbr(n / 10);
		cmpt += ft_putnbr(n % 10);
	}
	else
		cmpt += ft_putchar (n + '0');
	return (cmpt);
}
