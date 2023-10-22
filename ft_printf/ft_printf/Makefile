# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 18:31:34 by fcorvaro          #+#    #+#              #
#    Updated: 2023/10/22 22:43:36 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------  PROJECT  ----------------------------------------------------- #
NAME = libftprintf.a
#comments in Makefile are with 1 hash.
#.a = archive libraries are statically linked, so changes meaning recompile.

# ------------  FILEPATHS  --------------------------------------------------- #
LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft
#Rules to identify the location of libft.

FT_PRINTF = ./ft_printf
#Rule to identify the location of ft_printf sources.

# ------------  SOURCE FILES  ------------------------------------------------ #
SRCS_FT_PRINTF = ft_printf.c ft_printf_utils.c

OBJS_FT_PRINTF = $(SRCS_FT_PRINTF:.c=.o)
#The right syntax is with the brackets ().
#() are used to group commands together.
#{} are used to define variables.

# ------------  FLAGS  ------------------------------------------------------- #
AR = ar rcs
#ar is GNU command wich is used to create and manage archives.
#r tells ar to replace any existing members of the archive with the specified
#object files.
#c tells ar to create the archive if it doesn't exist.
#s tells ar to create an index of the archive members.

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

CP = cp
#copy.

# ------------  RULES  ------------------------------------------------------- #
.PHONY : all clean fclean re
#.PHONY is used to identify false targets

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS_FT_PRINTF)
		$(CP) $(LIBFT) $(NAME)
		@$(AR) $(NAME) $(OBJS_FT_PRINTF)
#The rule is saying that to create the target file, make should use
#theLIBClinker to link together the object files inOBJS.

$(LIBFT): $(LIBFT_PATH)
		@$(MAKE) -C $(LIBFT_PATH)
#The -C flag is used to specify the directory in which the make
#command should be executed.

%.o: 		$(FT_PRINTF)/%.c
				@$(CC) $(CFLAGS) -c $< -o $@
#%.o: This is the target pattern.
#It matches any file name that ends in .o.
#prerequisite pattern file c into the folder
#-c: This tells the compiler to compile the
#source file but not to link it with any other files.
clean:
			@$(MAKE) clean -C $(LIBFT_PATH)
			@$(RM) $(OBJS_FT_PRINTF)

fclean:		clean
				@$(MAKE) fclean -C $(LIBFT_PATH))
				@$(RM) $(NAME)

re : fclean all
#re rule do fclean and compile again