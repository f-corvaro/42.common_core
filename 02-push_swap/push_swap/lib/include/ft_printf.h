/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:49:40 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:20:34 by fcorvaro         ###   ########.fr       */
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

/* ------------  STRUCTURE DEFINITION - FORMAT FLAGS ------------------------ */
/* ------------  MINUS FLAG  ------------------------------------------------ */
/*
* If specified, the output is left-justified within the field width.
* Normally, the output is right-justified.
*/
/* ------------  ZERO FLAG  ------------------------------------------------- */
/*
 * If specified, the output is padded with zeros instead of spaces.
 * This flag is ignored if the minus flag is specified, the precision is
 * specified, or a non-numeric conversion specifier is used.
 */
/* ------------  PRECISION  ------------------------------------------------- */
/*
 * Specifies the minimum number of digits to be written if a number is being
 printed, or the maximum number of characters to be printed from a string.
 * If not specified, all digits of a number are printed and all characters of
  a string are printed up to the null terminator.
 */
/* ------------  HASH FLAG  ------------------------------------------------- */
/*
 * If specified, a non-zero result has the base prefix (0, 0x, or 0X) added
 for base 8, 16, or 16 uppercase conversions respectively.
 */
/* ------------  SPACE FLAG  ------------------------------------------------ */
/*
 * If specified, a blank space is inserted before a non-negative number.
 * This flag is ignored if the plus flag is specified.
 */
/* ------------  PLUS FLAG  ------------------------------------------------- */
/*
 * If specified, a sign (+ or -) is always placed before a number.
 * Normally, a sign is only placed before negative numbers.
 */
/* ------------  FIELD WIDTH  ----------------------------------------------- */
/*
 * Specifies the minimum number of characters to be printed.
 * If the value to be printed is shorter than this number, the result is
 * padded with blank spaces.
 * The value is not truncated even if the result is larger.
 */
/* ------------  SPECIFIER  ------------------------------------------------- */
/*
 * Specifies the type of the argument to be printed.
 * For example, 'd' for integer, 'f' for floating point, 's' for string, etc.
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
int			ft_print_hex(unsigned int n, int hex_up, t_format *format);
int			ft_print_ui(unsigned int n, t_format *format);
int			ft_print_ptr(unsigned long long n, int hex_up, t_format *format);

/* ------------  FORMATTING FUNCTIONS  -------------------------------------- */

void		ft_add_hex_prefix(char **str, int hex_up);
char		*ft_precision_formatting(char *str, t_format *format);
char		*ft_sign_space_prefix(int n, char *str, t_format *format);
void		ft_zero_padding(char *str, char **pis, t_format *format, int len);
char		*ft_field_width(char *str, t_format *format);

/* ------------  UTILITY FUNCTIONS  ----------------------------------------- */

void		ft_swap(char *s1, char *s2);
char		*ft_strrev(char *str);
char		*ft_itoa_base(unsigned long long int n, int base, int flag_hex_up);

/* ------------  PARSING AND HANDLING FUNCTIONS  ---------------------------- */

t_format	*ft_parse_format_specifier(const char *str, int *i);
int			ft_handle_specifier(t_format *format, va_list args);

/* ------------  MAIN FT_PRINTF FUNCTION  ----------------------------------- */

int			ft_printf(const char *frmt, ...);

#endif
