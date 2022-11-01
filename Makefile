# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 13:25:51 by aatki             #+#    #+#              #
#    Updated: 2022/11/01 16:57:59 by aatki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchr.c ft_putstr.c ft_putnbr.c ft_putnbr_ns.c ft_put_hexadicimall.c ft_put_hexadicimal.c ft_put_address.c 

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}

%.o : %.c 
	${CC} ${CFLAGS} -c $<
	${AR} ${NAME} $@

clean :
	rm -f ${OBJ}
	
fclean :clean
	rm -f ${NAME}
	
re : fclean all