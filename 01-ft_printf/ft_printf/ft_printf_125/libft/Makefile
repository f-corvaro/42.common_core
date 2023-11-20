# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 15:10:03 by fcorvaro          #+#    #+#              #
#    Updated: 2023/11/15 14:55:12 by fcorvaro         ###   ########.fr        #
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
AR = ar rcs

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
BUILD = libft.a

# ------------  FULL PATH TO THE BUILD FILE  --------------------------------- #
NAME = $(BUILD_DIR)/$(BUILD)

# ------------  SOURCE FILES  ------------------------------------------------ #
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c get_next_line_bonus.c \
		get_next_line_utils_bonus.c ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstmap.c ft_lstnew.c  ft_lstsize.c

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

# ------------  LIBRARY CREATION TARGET  ------------------------------------- #
$(NAME): $(OBJS) | $(BUILD_DIR)
	@$(AR) $(NAME) $^
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Created Successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m fcorvaro's Lybrary.$(END)"

# ------------  OBJECT FILE CREATION TARGET  --------------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $<$(END)"
	@$(CC) $(CFLAGS) -c $< -o $@

# ------------  CLEAN TARGET  ------------------------------------------------ #
clean:
	@$(RM) -r $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Objectives cleaned $(END)"

# ------------  FCLEAN TARGET  ----------------------------------------------- #
fclean: clean
	@$(RM) -r $(BUILD_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Build cleaned $(END)"

# ------------  RE TARGET  --------------------------------------------------- #
re : fclean
	@make all

# ------------  BONUS TARGET  ------------------------------------------------ #
bonus: re

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "	$(START)$(BOLD);$(ITALIC);$(M)mfcorvaro's library: This is a special library that include libft and get_next_line$(END)"
	@echo
	@echo "	$(START)$(BOLD);$(ITALIC);$(Y)mmake [help | all | bonus | clean | fclean | re]$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mall: compile the library and obtain libft.a. This is comprehends get_next_line bonus$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mbonus: do the same thing of re, bonus functions are included in the mandatory project$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mclean: remove object files$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mfclean: remove object files and archive library$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mhelp: displays informations$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mre: fclean and all$(END)"

# ------------  INCLUDE DEPENDENCY FILES  ------------------------------------ #
-include $(OBJS_DIR)/*.d