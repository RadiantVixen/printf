# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 13:25:51 by aatki             #+#    #+#              #
#    Updated: 2022/10/30 18:28:31 by aatki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRC = ft_printf.c ft_putchr.c ft_putstr.c ft_putnbr.c ft_putnbr_ns.c ft_put_binaire.c ft_put_hexadicimall.c ft_put_hexadicimal.c ft_put_address.c

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