# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 20:48:47 by fcorvaro          #+#    #+#              #
#    Updated: 2023/11/20 10:47:34 by fcorvaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Output: Appereance ------------------------------------------------------ #

# Start and end sequences for color codes -- REMEMBER (add ; and m)
START = \033[
END = \033[0m

# ------------  FOREGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BK = 30
R = 31
G = 32
Y = 33
BE = 34
M = 35
C = 36
W = 37

# ------------  BACKGROUND COLORS  ------------------------------------------- #
# Black, Red, Green, Yellow, Blue, Magenta, Cyan, White #
BKK = 40
RR = 41
GG = 42
YY = 43
BEE = 44
MM = 45
CC = 46
WW = 47

# ------------  TEXT STYLES  ------------------------------------------------- #
# Bold text, Faint text, Italic text, Underlined text, Blinking text ...#
#... Reverse colors, Hidden text, Strikethrough text #
BOLD = 1
FAINT = 2
ITALIC = 3
UNDERLINE = 4
BLINKING = 5
REVERSE =7
HIDDEN = 8
STRIKE = 9

# ------------  ARCHIVE COMMAND  --------------------------------------------- #
AR = ar rs

# ------------  COMPILER COMMAND  -------------------------------------------- #
CC = cc

# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f

# ------------  COMPILER FLAGS  ---------------------------------------------- #
CFLAGS = -Wall -Wextra -Werror

# ------------  SOURCE DIRECTORY  -------------------------------------------- #
SRCS_DIR = srcs

# ------------  OBJECTS DIRECTORY  ------------------------------------------- #
OBJS_DIR = objs

# ------------  BUILD DIRECTORY  --------------------------------------------- #
BUILD_DIR = build

# ------------  BUILD FILE NAME  --------------------------------------------- #
BUILD = libftprintf.a

# ------------  FULL PATH TO THE BUILD FILE  --------------------------------- #
NAME = $(BUILD_DIR)/$(BUILD)

# ------------  LIBFT LIBRARY FILE  ------------------------------------------ #
LIBFT = libft/build/libft.a

# ------------  LIBFT DIRECTORY  --------------------------------------------- #
LIBFT_DIR = libft

# ------------  SOURCE FILES  ------------------------------------------------ #
SRCS = ft_format.c ft_parse_and_handle_funcs.c ft_printf_funcs.c ft_printf.c \
		ft_ptr.c ft_utility_funcs.c

# ------------  OBJECT FILES  ------------------------------------------------ #
OBJS = $(addprefix $(OBJS_DIR)/, ${SRCS:%.c=%.o})

# ------------  PHONY TARGETS  ----------------------------------------------- #
.PHONY : all clean fclean re bonus help

# ------------  DEFAULT TARGET  ---------------------------------------------- #
all: $(NAME)

# ------------  OBJECTS DIRECTORY CREATION TARGET  --------------------------- #
$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

# ------------  BUILD DIRECTORY CREATION TARGET  ----------------------------- #
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# ------------  RULE TO BUILD LIBFT LIBRARY  --------------------------------- #
$(LIBFT): $(LIBFT_DIR)
	@make all -C libft

# ------------  LIBRARY CREATION TARGET  ------------------------------------- #
$(NAME): $(LIBFT) $(OBJS) | $(BUILD_DIR)
	@$(AR) $(LIBFT) $(OBJS)
	@$ cp libft/build/libft.a $(NAME)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Created Successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m fcorvaro's Lybrary.$(END)"

# ------------  OBJECT FILE CREATION TARGET  --------------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $<$(END)"
	@$(CC) $(CFLAGS) -c $< -o $@

# ------------  CLEAN TARGET  ------------------------------------------------ #
clean: $(LIBFT_DIR)
	@make clean -C libft
	@$(RM) -r $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Objectives cleaned $(END)"

# ------------  FCLEAN TARGET  ----------------------------------------------- #
fclean: clean
	@$(RM) -r $(BUILD_DIR)
	@make fclean -C libft
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Build cleaned $(END)"

# ------------  RE TARGET  --------------------------------------------------- #
re : fclean
	@make all

# ------------  BONUS TARGET  ------------------------------------------------ #
bonus: re

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "	$(START)$(BOLD);$(ITALIC);$(M)mfcorvaro's library: This is a special library that include libft, get_next_line and ft_printf.$(END)"
	@echo
	@echo "	$(START)$(BOLD);$(ITALIC);$(Y)mmake [help | all | bonus | clean | fclean | re]$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mall: compile the library and obtain libftprintf.a$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mbonus: do the same thing of re, bonus functions are included in the mandatory project$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mclean: remove object files$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mfclean: remove object files and archive library$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mhelp: displays informations$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mre: fclean and all$(END)"

# ------------  INCLUDE DEPENDENCY FILES  ------------------------------------ #
-include $(OBJS_DIR)/*.d