# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 21:35:49 by fcorvaro          #+#    #+#              #
#    Updated: 2024/01/18 21:41:19 by fcorvaro         ###   ########.fr        #
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

# ------------  INCLUDE HEADER FILES COMMAND  -------------------------------- #
INCLUDE	= -I./include/ -I./lib/include/

# ------------  LIBRARY LINKING COMMAND  ------------------------------------- #
LIBRARIES	= -L./lib/build -lftprintf

# ------------  COMPILER COMMAND  -------------------------------------------- #
CC = gcc

# ------------  REMOVE COMMAND  ---------------------------------------------- #
RM = rm -f

# ------------  DEBUGGER LEAKS FLAGS  ---------------------------------------- #
LEAKS = -g3 -ggdb

# ------------  COMPILER FLAGS  ---------------------------------------------- #
CFLAGS = -Wall -Wextra -Werror

# ------------  SOURCES DIRECTORY  ------------------------------------------- #
SRCS_DIR = srcs

# ------------  OBJECTS DIRECTORY  ------------------------------------------- #
OBJS_DIR = objs

# ------------  BONUS SOURCES DIRECTORY  ------------------------------------- #
SRCS_B_DIR = srcs_b

# ------------  BONUS OBJECTS DIRECTORY  ------------------------------------- #
OBJS_B_DIR = objs_b

# ------------  BUILD FILE NAME  --------------------------------------------- #
BUILD = push_swap

# ------------  FULL PATH TO THE BUILD FILE  --------------------------------- #
NAME = $(BUILD)

# ------------  BUILD BONUS FILE NAME  --------------------------------------- #
BUILD_B = checker

# ------------  FULL PATH TO THE BUILD BONUS FILE  --------------------------- #
NAME_B = $(BUILD_B)

# ------------  MY LIBRARY FILE  --------------------------------------------- #
MY_LIB = lib/build/libftprintf.a

# ------------  MY LIBRARY DIRECTORY  ---------------------------------------- #
MY_LIB_DIR = lib

# ------------  SOURCES FILES  ----------------------------------------------- #
SRCS = ft_error_handling.c ft_free.c ft_id_stack_a.c ft_id_stack_b.c \
		ft_init_op.c ft_input_preparation.c ft_op_p.c ft_op_r.c ft_op_rr.c \
		ft_op_s.c ft_stack_calc_a.c ft_stack_calc_b.c ft_stack_calc.c \
		ft_stack_half_opa.c ft_stack_half_opb.c ft_stack_op.c \
		ft_stack_searching_op.c ft_stack_sorting.c ft_utils.c main.c

# ------------  OBJECT FILES  ------------------------------------------------ #
OBJS = $(addprefix $(OBJS_DIR)/, ${SRCS:%.c=%.o})

# ------------  BONUS SOURCES FILES  ----------------------------------------- #
SRCS_B = ft_checker.c main.c

# ------------  BONUS OBJECT FILES  ------------------------------------------ #
OBJS_B = $(addprefix $(OBJS_B_DIR)/, ${SRCS_B:%.c=%.o})

# ------------  PHONY TARGETS  ----------------------------------------------- #
.PHONY : all clean fclean re bonus help

# ------------  DEFAULT TARGET  ---------------------------------------------- #
all: $(NAME)

# ------------  OBJECTS DIRECTORY CREATION TARGET  --------------------------- #
$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

# ------------  OBJECTS BONUS DIRECTORY CREATION TARGET  --------------------- #
$(OBJS_B_DIR):
	@mkdir -p $(OBJS_B_DIR)

# ------------  RULE TO BUILD MY LIBRARY  ------------------------------------ #
$(MY_LIB): $(MY_LIB_DIR)
	@make all -C lib

# ------------  PUSH_SWAP CREATION TARGET  ----------------------------------- #
$(NAME): $(MY_LIB) $(OBJS)
	@$(CC) $(CFLAGS) $(LEAKS) $(OBJS) -o $(NAME) $(INCLUDE) $(LIBRARIES)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Created Successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m fcorvaro's Push_Swap.$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(FAINT);$(M)m For more info, type --> make help.$(END)"

# ------------  CHECKER CREATION TARGET  ------------------------------------- #
$(NAME_B): $(MY_LIB) $(filter-out %/main.o, $(OBJS)) $(OBJS_B)
	@$(CC) $(CFLAG) $(LEAKS) $(filter-out %/main.o, $(OBJS)) $(OBJS_B) -o $(NAME_B) $(INCLUDE) $(LIBRARIES)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Created Successfully!$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(M)m fcorvaro's Checker.$(END)"
	@echo "$(START)$(BOLD);$(ITALIC);$(FAINT);$(M)m For more info, type --> make help.$(END)"

# ------------  OBJECT FILE CREATION TARGET  --------------------------------- #
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling $<$(END)"
	@$(CC) $(CFLAGS) $(LEAKS) -c $< -o $@ $(INCLUDE)

# ------------  OBJECT BONUS FILE CREATION TARGET  ---------------------------- #
$(OBJS_B_DIR)/%.o: $(SRCS_B_DIR)/%.c | $(OBJS_B_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(Y)mCompiling bonus part $<$(END)"
	@$(CC) $(CFLAGS) $(LEAKS) -c $< -o $@ $(INCLUDE)

# ------------  CLEAN TARGET  ------------------------------------------------ #
clean: $(MY_LIB_DIR)
	@make clean -C lib
	@$(RM) -r $(OBJS_DIR)
	@$(RM) -r $(OBJS_B_DIR)
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Objectives cleaned $(END)"

# ------------  FCLEAN TARGET  ----------------------------------------------- #
fclean: clean
	@$(RM) -r $(BUILD)
	@$(RM) -r $(BUILD_B)
	@make fclean -C lib
	@echo "$(START)$(BOLD);$(ITALIC);$(G)m Build cleaned $(END)"

# ------------  RE TARGET  --------------------------------------------------- #
re : fclean
	@make all

# ------------  BONUS TARGET  ------------------------------------------------ #
bonus: $(NAME_B)

# ------------  HELP TARGET  ------------------------------------------------- #
help:
	@echo "	$(START)$(BOLD);$(ITALIC);$(M)mfcorvaro's Push_Swap.$(END)"
	@echo "	$(START)$(BOLD);$(ITALIC);$(FAINT);$(M)mThe goal is to sort a stack of numbers in ascending order using two stacks and a limited set$(END)"
	@echo "	$(START)$(BOLD);$(ITALIC);$(FAINT);$(M)mof operations. My Push_Swap is based on brute force sorting algorithm.$(END)"
	@echo
	@echo "	$(START)$(BOLD);$(ITALIC);$(Y)mmake [help | all | bonus | clean | fclean | re]$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mall: Obtain the push_swap.$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mbonus: Obtain checker.$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mclean: remove object files.$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mfclean: remove object files, archive library and executables.$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mhelp: displays informations.$(END)"
	@echo "		$(START)$(BOLD);$(ITALIC);$(FAINT);$(Y)mre: do the fclean and all.$(END)"

# ------------  INCLUDE DEPENDENCY FILES  ------------------------------------ #
-include $(OBJS_DIR)/*.d

# ------------  INCLUDE BONUS DEPENDENCY FILES  ------------------------------ #
-include $(OBJS_B_DIR)/*.d
