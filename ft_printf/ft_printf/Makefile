# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 18:31:34 by fcorvaro          #+#    #+#              #
#    Updated: 2023/10/22 18:56:38 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
#comments in Makefile are with 1 hash.
#.a = archive libraries are statically linked, so changes meaning recompile.

LIBC = ar rcs
#ar is GNU command wich is used to create and manage archives.
#r tells ar to replace any existing members of the archive with the specified
#object files.
#c tells ar to create the archive if it doesn't exist.
#s tells ar to create an index of the archive members.

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = ft_printf.c ft_printf_utils.c
OBJS = ${SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
#.c.o: is a suffix rule that tells make how to create .o file from .c
#$< is automatic variables and it represents the first prerequisite required
#to create the output file.

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}
#The rule is saying that to create the target file, make should use
#theLIBClinker to link together the object files inOBJS.

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_B}
#The clean will remove all .o files

fclean: clean
	${RM} ${NAME}
#fclean clean + remove the .a file

re : fclean all
#re rule do fclean and compile again

.PHONY : all clean fclean re
#.PHONY is used to identify false targets