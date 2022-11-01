/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:43:29 by aatki             #+#    #+#             */
/*   Updated: 2022/11/01 23:04:56 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadicimal(unsigned long n)
{
	int	cmpt;
	int	tab[100];
	int	i;

	cmpt = 0;
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n >= 1)
	{
		tab[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (tab[i] >= 10)
			ft_putchar('a' + tab[i] - 10);
		else
			ft_putnbr(tab[i]);
		i--;
		cmpt++;
	}	
	return (cmpt);
}

int	ft_put_address(unsigned long *p)
{
	int				cmpt;
	unsigned long	*a;

	cmpt = 0;
	a = (unsigned long *) &p;
	cmpt = ft_putstr("0x");
	cmpt += hexadicimal(*a);
	return (cmpt);
}
