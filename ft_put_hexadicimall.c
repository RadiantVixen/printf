/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadicimall.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:44:25 by aatki             #+#    #+#             */
/*   Updated: 2022/11/01 23:01:16 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexadicimall(unsigned int n)
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
			ft_putchar('A' + tab[i] - 10);
		else
			ft_putnbr(tab[i]);
		i--;
		cmpt++;
	}	
	return (cmpt);
}
