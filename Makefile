# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 16:30:03 by aminoru-          #+#    #+#              #
#    Updated: 2022/04/06 14:11:31 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c

OBJS	=	${SRCS:.c=.o}

all: 		${NAME}

${NAME}: 	${OBJS} ${INCLUDE}
				ar -rcs ${NAME} ${OBJS}
				ranlib ${NAME}
			
.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
				rm -f ${OBJS}

fclean: 	clean
				rm -f ${NAME}

re: 		fclean all