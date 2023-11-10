# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 18:38:41 by fcorvaro          #+#    #+#              #
#    Updated: 2023/11/10 22:03:12 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL =/bin/bash

# -- Output: Appereance ------------------------------------------------------ #

START = \033[
END = \033[0m

#Foreground - add ; and m
BK = 30
R = 31
G = 32
Y = 33
BE = 34
M = 35
C = 36
W = 37

#Background - add ; and m
BKK = 40
RR = 41
GG = 42
YY = 43
BEE = 44
MM = 45
CC = 46
WW = 47

#TYPE - add ; and m
BOLD = 1
FAINT = 2
ITALIC = 3
UNDERLINE = 4
BLINKING = 5
REVERSE =7
HIDDEN = 8
STRIKE = 9

# ------------  FILEPATHS  --------------------------------------------------- #
SRCS_DIR = srcs
INCLUDE_DIR = include
BUILD_DIR = build
SRCS = $(SRCS_DIR)/push_swap.c $(SRCS_DIR)/ $(SRCS_DIR)/ $(SRCS_DIR)/
SRC_CHECKER = $(SRCS_DIR)/checker.c

LIBFTPRINTF_DIR = lib/ft_printf
LIBFTPRINTF_SRC = $(shell [-d lib ] && ls lib/ft_printf/*.c)
LIBFTPRINTF = $(LIBFTPRINTF_DIR)/libftprintf.a

# -- Title: Project information ---------------------------------------------- #
BIN = push_swap
BIN_B = checker
NAME = $(BUILD_DIR)/$(BIN)

# ------------  OBJS FILES  -------------------------------------------------- #

OBJ_LIBFTPRINTF = $(addprefix $(LIBFTPRINTF_DIR)/, $(LIBFTPRINTF_SRC:.c=.o))
OBJ = $(addprefix $(SRCS_DIR)/, $(SRC_CHECKER:.c=.o))
OBJ_CHECKER = $(addprefix $(SRCS_DIR)/, $(SRC_CHECKER:.c=.o))


LIBS = -L$(LIBFTPRINTF_DIR)  -lft

# ------------  FLAGS  ------------------------------------------------------- #
AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
LEAKS = -ggdb -fsanitize=address -fsanitize=undefined
RM = rm -rf
CP = cp

# ------------  RULES  ------------------------------------------------------- #
.PHONY : all clean fclean re bonus help

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS_FT_PRINTF)
		$(CP) $(LIBFT) $(NAME)
		@$(AR) $(NAME) $(OBJS_FT_PRINTF)
#This rule is saying that to create the target file, make should use
#theLIBFTlinker to link together the object files in OBJS_FT_PRINTF.

$(LIBFT): $(LIBFT_PATH)
		@$(MAKE) -C $(LIBFT_PATH)
#The -C flag is used to specify the directory in which the make
#command should be executed.

%.o: 		$(FT_PRINTF)/%.c
				@$(CC) $(CFLAGS) -c $< -o $@
#It matches any file name that ends in .o.
#prerequisite pattern file c into the folder.
#-c flag tells the compiler to not to link the object file
#with any other object files or libraries.
#-o is a flag for the name of .o files.

clean:
			@$(MAKE) clean -C $(LIBFT_PATH)
			@$(RM) $(OBJS_FT_PRINTF)
#Clean is used to remove .o files of libft and ft_printf.

fclean:		clean
				@$(MAKE) fclean -C $(LIBFT_PATH)
				@$(RM) $(NAME)
#fclean will do the same of clean, but remove the .a files.

re : fclean all
#re rule do fclean and compile again.

bonus:		all