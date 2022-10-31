/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:24:04 by aatki             #+#    #+#             */
/*   Updated: 2022/10/30 18:56:46 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*int ft_printf(const char *fmt, ...)
{
	va_list	ap;
	//va_list	ap2;
	char	c;
	char	*s;
	int	d;
	void *p;
	va_start(ap,fmt);
	//va_copy(ap2,ap);
	while (*fmt)
	{
		switch(*fmt++)
		{
			case 's' :
						s = va_arg(ap, char *);
					 ft_putstr(s);
					 break;
			case 'c' :
					 c = va_arg(ap, int);
					 ft_putchar(c);
					 break;
			case 'd' :
					d = va_arg(ap, int);
					ft_putnbr(d);
					break;
			case '%':
					 //c = va_arg(ap, int);
					 ft_putchar('%');
					 break;
			case 'p':
					p = va_arg(ap, char *);
					ft_put_address(p);
					break;
			case 'u':
					d = va_arg(ap, int);
					ft_putnbr_ns(d);
					break;
			case 'i':
					d = va_arg(ap, int);
					ft_put_binaire(d);
					break;
			case 'x':
				d = va_arg(ap, int);
					ft_put_hexadicimal(d);
					break;
			case 'X':
					d = va_arg(ap, int);
					//ft_put_hexadicimall(d);
					break;
		}
	}
	va_end(ap);
	//va_end(ap2);
	return 1;
}

int main()
{
	ft_printf("%i",10);
	 printf("\n%u",33222);
}*/

int printf(char *s, ...)
{
	int i = 0;
	va_list	*p;
	int cmpt;
	//va_list	ap2;
	char	c;
	char	*s;
	int	d;
	void *p;
	va_start(ap,fmt);
	//va_copy(ap2,ap);
	while(s[i])
	{
		if(s[i] == '%')
		{
			i++;
			if(s[i] == 's')
			{
				s = va_arg(ap, char *);
				 cmpt=ft_putstr(s);
			}
			if(s[i] == 'c')
			{
				 c = va_arg(ap, int);
					 ft_putchar(c);
			}
			if(s[i] == 'd')
			{
				d = va_arg(ap, int);
				ft_putnbr(d);
			}
			if(s[i] == '%')
			{
				ft_putchar('%');
			}
			if(s[i] == 'p')
			{
				p = va_arg(ap, char *);
				ft_put_address(p);
			}
			if(s[i] == 'u')
			{
				d = va_arg(ap, int);
				ft_putnbr_ns(d);
			}
			if(s[i] == 'i')
			{
				d = va_arg(ap, int);
					ft_put_binaire(d);
			}
			if(s[i] == 'x')
			{
				d = va_arg(ap, int);
					ft_put_hexadicimal(d);
			}
			if(s[i] == '%')
			{
				d = va_arg(ap, int);
				//ft_put_hexadicimall(d);
			}
		}
	}
}