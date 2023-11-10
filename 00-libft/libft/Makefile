# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 15:10:03 by fcorvaro          #+#    #+#              #
#    Updated: 2023/11/10 17:59:44 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile, comments are made with one hastag
#.a is archive libraries that are statically linked. I'm define the name of my lib
#These are variables
NAME = libft.a
# * c, means create the archive.
# The specified archive is always created if it did not exist, when you request an
#update. * r, insert the files member into the archive (with replacement).
# This operation delete the previosly existing members if their names match those
#being added * Write an object-file index into the archive, or update an existing
#one, even if noother change is made to the archive.
#ar s on an archive is equivalent to running ranlib on it.
AR = ar rcs
#CC is my compiler, that are called macro
CC = cc
# RM is remove forced
RM = rm -f
#The flags for the compiler
CFLAGS = -Wall -Wextra -Werror
#I include the sources, i.e. the functions
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c

SRCS_B = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
			 ft_lstlast.c ft_lstmap.c ft_lstnew.c  ft_lstsize.c

#OBJS will change .c in .o
OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

#these are commands, $< when used in the "recipe",
#means "the first prerequisite" - the first thing after the : in the line above.
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
#this command mean take the OBJS and put into the NAME with the commands of AR
${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}

all: ${NAME}
#for the bonus part
bonus:	${NAME} ${OBJS_B}
	${AR} ${NAME} ${OBJS_B}
#The clean will remove all .o files
clean:
	${RM} ${OBJS} ${OBJS_B}
#The fclean will do the clean + remove the .a file
fclean: clean
	${RM} ${NAME}
#re will do fclean and he will do the make again
re : fclean all

#declare the .PHONY is used to explicitly declare false targets.
.PHONY : all clean fclean re bonus info

info:
	@echo "	fcorvaro's libft: make [info | all | bonus | clean | fclean | re]"
	@echo
	@echo "	libft build targets"
	@echo "		all: compile the library"
	@echo "		bonus: compile the library with bonus"
	@echo "		clean: remove object files"
	@echo "		fclean: remove object files and archive library"
	@echo "		info: displays informations"
	@echo "		re: fclean and all						"