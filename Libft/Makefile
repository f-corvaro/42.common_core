# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 15:10:03 by fcorvaro          #+#    #+#              #
#    Updated: 2023/03/30 17:19:09 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#di
NAME = libft.a 
LIBC = ar rcs
CC = cc 
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror#includo le source#
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

#OBJS serve per cambiare l'estensione .c in .o quando compileró#
OBJS = ${SRCS:.c=.o}


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS} 

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
#re serve per per pulire i file .o e i file .a e reiterare il make#
re : fclean all

#dichiarare il .PHONY serve per dichiarare esplicitamente i target falsi.#
.PHONY : all clean fclean re 
