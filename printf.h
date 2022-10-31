/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:24:56 by aatki             #+#    #+#             */
/*   Updated: 2022/10/30 18:29:37 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

 #include <stdarg.h>
 #include<unistd.h>
 #include <stdio.h>
 
int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_put_address(void *p);
void	ft_putnbr_ns(int n);
void	ft_put_binaire(int d);
void	ft_put_hexadicimal(int n);
void	ft_put_hexadicimall(int n);







#endif