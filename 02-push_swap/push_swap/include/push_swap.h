/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:35:46 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/01/18 19:01:03 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ------------  HEADER GUARD  ---------------------------------------------- */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ------------  My LIBRARY  ------------------------------------------------ */
# include "ft_printf.h"

/* ------------  String Manipulation Functions  ----------------------------- */
# include <string.h>

/* ------------  Standard Integer Types  ------------------------------------ */
# include <stdint.h>

/**
 * @brief A structure to hold the count of each operation in push_swap
 * algorithm resolved with the implementation of brute forcing sorting
 * algorithm.
 *
 * @param sa Swap a - Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
 * @param sb Swap b - Swap the first 2 elements at the top of stack b.
 * Do nothing if there is only one or no elements.
 * @param ss sa and sb at the same time.
 * @param pa Push a - Take the first element at the top of b and put it at
 * the top of a. Do nothing if b is empty.
 * @param pb Push b - Take the first element at the top of a and put it at
 * the top of b. Do nothing if a is empty.
 * @param ra Rotate a - Shift up all elements of stack a by 1.
 * The first element becomes the last one.
 * @param rb Rotate b - Shift up all elements of stack b by 1.
 * The first element becomes the last one.
 * @param rr ra and rb at the same time.
 * @param rra Reverse rotate a - Shift down all elements of stack a by 1.
 * The last element becomes the first one.
 * @param rrb Reverse rotate b - Shift down all elements of stack b by 1.
 * The last element becomes the first one.
 * @param rrr rra and rrb at the same time.
 */
typedef struct s_operations
{
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}				t_operations;

/**
 * @brief A structure to hold the current state of the sorting process.
 *
 * @param stack_a Pointer to the first element of stack a.
 * @param stack_b Pointer to the first element of stack b.
 * @param len_a Length of stack a.
 * @param len_b Length of stack b.
 * @param half_idx_a Index of the middle element in stack a.
 * @param half_idx_b Index of the middle element in stack b.
 * @param max_val_a Maximum value in stack a.
 * @param max_val_b Maximum value in stack b.
 * @param min_val_a Minimum value in stack a.
 * @param min_val_b Minimum value in stack b.
 * @param idx_max_a Index of the maximum value in stack a.
 * @param idx_max_b Index of the maximum value in stack b.
 * @param idx_min_a Index of the minimum value in stack a.
 * @param idx_min_b Index of the minimum value in stack b.
 * @param maj_idx_num_a Index of the majority number in stack a.
 * @param maj_idx_num_b Index of the majority number in stack b.
 * @param min_idx_num_a Index of the minority number in stack a.
 * @param min_idx_num_b Index of the minority number in stack b.
 * @param idx_a_pushed Index of the last pushed element in stack a.
 * @param idx_b_pushed Index of the last pushed element in stack b.
 * @param idx_str Index of the starting element for the sorting process.
 * @param count_op Count of operations performed so far.
 * @param tot_op Total operations to be performed.
 * @param operation A t_operations struct that holds the details of the
 * operations performed during the sorting process.
 */
typedef struct s_SortingDetails
{
	int				*stack_a;
	int				*stack_b;
	int				len_a;
	int				len_b;
	int				half_idx_a;
	int				half_idx_b;
	int				max_val_a;
	int				max_val_b;
	int				min_val_a;
	int				min_val_b;
	int				idx_max_a;
	int				idx_max_b;
	int				idx_min_a;
	int				idx_min_b;
	int				maj_idx_num_a;
	int				maj_idx_num_b;
	int				min_idx_num_a;
	int				min_idx_num_b;
	int				idx_a_pushed;
	int				idx_b_pushed;
	int				idx_str;
	int				count_op;
	int				tot_op;
	t_operations	operation;
}				t_SortingDetails;

/* ------------  Input Manipulation Functions ------------------------------- */

/* --------------------------------------------> ft_input_preparation.c */

t_SortingDetails	*ft_parse_input(t_SortingDetails	*data, char **in);
void				ft_validate_input(char **av, int j);
int					ft_count_input_num(char **av);
int					ft_split_and_store(t_SortingDetails *data, char **av);

/* ------------  Init Operations Functions ---------------------------------- */

/* ------------------------------------------------------------> ft_init_op.c */

void				ft_init_op_count(t_SortingDetails *data);
int					ft_is_already_sorted(t_SortingDetails	*data);
int					ft_init_presort_op(t_SortingDetails *data, char **a, int f);
void				ft_gather_stack_stats(t_SortingDetails *data);

/* ------------  Stack Operations Functions --------------------------------- */

/* ----------------------------------------------> ft_stack_op.c */

int					*ft_copy_stack_a(t_SortingDetails *data);
int					ft_check_double(t_SortingDetails *data);
void				ft_pd(t_SortingDetails *data);
void				ft_rotate_min_a_to_top(t_SortingDetails *data);

/* ----------------------------------------> ft_op_p.c */

void				ft_pa(t_SortingDetails *data, int f);
void				ft_pb(t_SortingDetails *data, int f);

/* ----------------------------------------> ft_op_r.c */

void				ft_ra(t_SortingDetails *data, int f);
void				ft_rb(t_SortingDetails *data, int f);
void				ft_rr(t_SortingDetails *data, int f);

/* ----------------------------------------> ft_op_rr.c */

void				ft_rra(t_SortingDetails *data, int f);
void				ft_rrb(t_SortingDetails *data, int f);
void				ft_rrr(t_SortingDetails *data, int f);

/* ----------------------------------------> ft_op_s.c */

void				ft_sa(t_SortingDetails *data, int f);
void				ft_sb(t_SortingDetails *data, int f);
void				ft_ss(t_SortingDetails *data, int f);

/* ------------------------------------------------> ft_stack_searching_op.c */

int					ft_find_largest_in_b(t_SortingDetails *data, int i);
int					ft_find_smallest_in_b(t_SortingDetails *data, int i);
int					ft_find_smallest_great_in_a(t_SortingDetails *data, int i);
int					ft_find_smallest_less_in_a(t_SortingDetails *data, int i);

/* ----------------------------------------------> ft_stack_calc.c */

int					ft_find_mid_stack(t_SortingDetails *data, int f);

/* ---------------------------------------> ft_id_stack_a.c */

int					ft_find_idx_max_a(t_SortingDetails *data);
int					ft_find_max_a(t_SortingDetails *data);
int					ft_find_idx_min_a(t_SortingDetails *data);
int					ft_find_min_a(t_SortingDetails *data);

/* ---------------------------------------> ft_id_stack_b.c */

int					ft_find_idx_max_b(t_SortingDetails *data);
int					ft_find_max_b(t_SortingDetails *data);
int					ft_find_idx_min_b(t_SortingDetails *data);
int					ft_find_min_b(t_SortingDetails *data);

/* --------------------------------------------------> ft_stack_half_opa.c */

void				ft_r_upper_half_a(t_SortingDetails *data, int i, int tm);
void				ft_r_lower_half_a(t_SortingDetails *data, int i, int tm);
void				ft_r_diff_half_a(t_SortingDetails *data, int i, int tm);
void				ft_move_b_to_a(t_SortingDetails *data);
int					ft_c_mv_b_to_a(t_SortingDetails *data, int i);

/* --------------------------------------------------> ft_stack_half_opb.c */

void				ft_r_upper_half_b(t_SortingDetails *data, int i, int tm);
void				ft_r_lower_half_b(t_SortingDetails *data, int i, int tm);
void				ft_r_diff_half_b(t_SortingDetails *data, int i, int tm);
void				ft_move_a_to_b(t_SortingDetails *data);
int					ft_c_mv_a_to_b(t_SortingDetails *data, int i);

/* ----------------------------------------------> ft_stack_calc_a.c */

void				ft_c_upper_op_a(t_SortingDetails *data, int i);
void				ft_c_lower_op_a(t_SortingDetails *data, int i);
void				ft_c_different_op_a(t_SortingDetails *data, int i);

/* ----------------------------------------------> ft_stack_calc_b.c */

void				ft_c_upper_op_b(t_SortingDetails *data, int i);
void				ft_c_lower_op_b(t_SortingDetails *data, int i);
void				ft_c_different_op_b(t_SortingDetails *data, int i);

/* ------------  Stack Sorting Functions ------------------------------------ */

/* ----------------------------------------------> ft_stack_sorting.c */

void				ft_exe_sorting_op(t_SortingDetails *data, int f);
void				ft_sort_three_elements(t_SortingDetails *data);
void				ft_sort_small_stacks(t_SortingDetails *data, int f);
void				ft_sort_stacks(t_SortingDetails *data);

/* ------------  Utility Functions ------------------------------------------ */

/* -------------------------------> ft_utils.c */

int					ft_atoi_val(const char *str);

/* --------------> ft_error_handling.c */

void				ft_print_error(void);

/* ------------------------------------------------> ft_free.c */

void				ft_dealloc_sort_data(t_SortingDetails *data);
int					ft_free_array(char **array, int f);

/* ------------  Checker Functions - Bonus ---------------------------------- */

/* ------------------------------------------------> ft_checker.c */

int					ft_error_exit(t_SortingDetails *data);
int					ft_strcmp(char *s1, char *s2);
int					ft_perform_op(char *op, t_SortingDetails *data);

#endif