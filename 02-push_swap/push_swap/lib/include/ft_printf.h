/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:49:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:42:08 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ------------  HEADER GUARD  ---------------------------------------------- */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ------------  APPLE SPECIFIC DEFINITIONS  -------------------------------- */
# ifdef __APPLE__
#  define NULLSTRING "(null)"
#  define NULLPOINTER "0x0"

/* ------------  NON-APPLE SPECIFIC DEFINITIONS  ---------------------------- */
# else
#  define NULLSTRING "(null)"
#  define NULLPOINTER "(nil)"
# endif

/* ------------  INT MAX DEFINITION  ---------------------------------------- */
# define INT_MAX 2147483647

/* ------------  INT min DEFINITION  ---------------------------------------- */
# define INT_MIN -2147483648

/* ------------  HEXADECIMAL UPPERCASE DEFINITION  -------------------------- */
# define HEXAUP "0123456789ABCDEF"

/* ------------  HEXADECIMAL LOWERCASE DEFINITION  -------------------------- */
# define HEXALOW "0123456789abcdef"

/* ------------  STANDARD ARGUMENTS LIBRARY  -------------------------------- */
# include <stdarg.h>

/* ------------  My LIBFT-GNL LIBRARY  -------------------------------------- */
# include "../libft/include/libft.h"

/* ------------  BOOLEAN TYPE DEFINITION  ----------------------------------- */
typedef int	t_bool;

/* ------------  BOOLEAN CONSTANTS  ----------------------------------------- */
# define TRUE 1
# define FALSE 0

/*
 * @brief Structure representing a format specifier in ft_printf.
 * @param minus: Flag for left-justification.
 * @param zero: Flag for zero-padding.
 * @param precision: Precision for the output.
 * @param hash: Flag for alternate form.
 * @param space: Flag for space before positive number.
 * @param plus: Flag for sign before number.
 * @param field_width: Minimum number of characters to output.
 * @param specifier: The conversion specifier.
 */
typedef struct s_format
{
	int		minus;
	int		zero;
	int		precision;
	int		hash;
	int		space;
	int		plus;
	int		field_width;
	char	specifier;
}	t_format;

/* ------------  PRINT FUNCTIONS  ------------------------------------------- */

int			ft_print_char(int c, t_format *format);
int			ft_print_str(char *stri, t_format *format);
int			ft_print_int(int n, t_format *format);
int			ft_print_ui(unsigned int n, t_format *format);
int			ft_print_hex(unsigned int n, int hex_up, t_format *format);
int			ft_print_ptr(unsigned long long n, int hex_up, t_format *format);

/* ------------  FORMATTING FUNCTIONS  -------------------------------------- */

void		ft_add_hex_prefix(char **str, int hex_up);
void		ft_zero_padding(char *str, char **pad, t_format *format, int len);
char		*ft_precision_format(char *str, t_format *format);
char		*ft_plus_space_format(int n, char *str, t_format *format);
char		*ft_field_width(char *str, t_format *format);

/* ------------  UTILITY FUNCTIONS  ----------------------------------------- */

void		ft_swap_ptr(char *s1, char *s2);
char		*ft_strrev(char *str);
char		*ft_itoa_base(unsigned long long int n, int base, int flag_hex_up);

/* ------------  PARSING AND HANDLING FUNCTIONS  ---------------------------- */

int			ft_handle_specifier(t_format *format, va_list args);
t_format	*ft_parse_format_specifier(const char *str, int *i);

/* ------------  MAIN FT_PRINTF FUNCTION  ----------------------------------- */

int			ft_printf(const char *frmt, ...);

#endif
