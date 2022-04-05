# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 16:30:03 by aminoru-          #+#    #+#              #
#    Updated: 2022/04/05 23:13:43 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_isalpha.c ft_isdigit.c

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