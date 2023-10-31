/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:03:58 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/10/29 23:16:58 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ------------  PREAMBLE  -------------------------------------------------- */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

/* ------------  FUNCTIONS  ------------------------------------------------- */

int			ft_putchar_len(char c);
int			ft_putstr_len(char *str);
int			ft_putnumb_len(int num);
int			ft_printf(const char *spec, ...);
int			ft_printf_spec(va_list args, const char spec);
int			ft_hexlen(unsigned int num);
void		ft_puthex(unsigned int num, const char spec);
int			ft_hex(unsigned int num, const char spec);
int			ft_ptrlen(unsigned long long ptr);
int			ft_putptr(unsigned long long ptr);
int			ft_pointer(unsigned long long ptr);
int			ft_unlen(unsigned int str);
char		*ft_utoa(unsigned int num);
int			ft_unsigned(unsigned int num);

#endif
