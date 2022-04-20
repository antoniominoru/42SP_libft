# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 16:30:03 by aminoru-          #+#    #+#              #
#    Updated: 2022/04/20 20:55:36 by aminoru-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

OBJS	=	${SRCS:.c=.o}

all: 		${NAME}

${NAME}: 	${OBJS}
				ar -rcs ${NAME} ${OBJS}
				ranlib ${NAME}
			
.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
				rm -f ${OBJS}

fclean: 	clean
				rm -f ${NAME}

re: 		fclean all

.PHONY: all clean fclean re