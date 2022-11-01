/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:09:44 by aatki             #+#    #+#             */
/*   Updated: 2022/11/01 22:59:03 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ns(unsigned int n)
{
	int	cmpt;

	cmpt = 0;
	if (n >= 0 && n <= 9)
		cmpt += ft_putchar (n + '0');
	else
	{
		cmpt += ft_putnbr_ns(n / 10);
		cmpt += ft_putnbr_ns(n % 10);
	}
	return (cmpt);
}
