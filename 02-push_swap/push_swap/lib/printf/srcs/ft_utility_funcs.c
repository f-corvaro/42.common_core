/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:25:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/13 18:06:22 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/* ------------  SWAP FUNCTION  --------------------------------------------- */
/*
 * This function swaps the values of two characters.
 * It takes as parameters two pointers to characters (s1 and s2).
 * The function uses a temporary character (tmp) to hold the value of s1,
 * then assigns the value of s2 to s1, and finally assigns the value of tmp to
 * s2.
 * As a result, the values of s1 and s2 are swapped.
 */
void	ft_swap(char *s1, char *s2)
{
	char	tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

/* ------------  STRING REVERSE FUNCTION  ----------------------------------- */
/*
 * This function reverses a string in place.
 * It takes as a parameter the string to be reversed (str).
 * Two pointers (start and end) are initialized to the start of the string.
 * The end pointer is moved to the end of the string by incrementing it
 * until it points to the null terminator.
 * Then, a loop is started that continues as long as the end pointer is greater
 * than the start pointer.
 * In each iteration of the loop, the characters pointed to by the start and
 * end pointers are swapped,
 * and then the start pointer is incremented and the end pointer is decremented.
 * Finally, the function returns the reversed string.
 */
char	*ft_strrev(char *str)
{
	char	*start;
	char	*end;

	start = str;
	end = str;
	while (*(end + 1))
		end++;
	while (end > start)
		ft_swap(start++, end--);
	return (str);
}

/* ------------  GET BUFFER SIZE FUNCTION  ---------------------------------- */
/*
 * This function calculates the buffer size needed to hold the string
 * representation of a number in a given base.
 * It takes as parameters the number (n) and the base.
 * If the number is 0, it returns 2 (one for the '0' character and one
 * for the null terminator).
 * Otherwise, it increments a size counter for each digit in the number by
 * continuously dividing the number by the base until it becomes 0.
 * Finally, it returns the calculated size.
 */
static int	ft_get_buffer_size(unsigned long long int n, int base)
{
	int	size;

	if (n == 0)
		return (2);
	size = 1;
	while (n != 0)
	{
		n = n / base;
		size++;
	}
	return (size);
}

/* ------------  INTEGER TO ASCII BASE FUNCTION  ---------------------------- */
/*
 * This function converts an unsigned long long integer to a string
 * representation in a specified base.
 *
 * It takes as parameters the number to be converted (n),
 * the base for conversion (base), and a flag indicating whether to use
 * uppercase for hexadecimal digits (flag_hex_up).
 *
 * The function first selects the appropriate character set for the
 * base (base_str), depending on the flag_hex_up parameter.
 * Then it calculates the buffer size needed to hold the string representation
 * of the number and allocates memory for the string (str).
 * If memory allocation fails, the function returns NULL.
 * Then, a loop is started that continues as long as the number divided by the
 * base is not 0.
 * In each iteration of the loop, the remainder of the number divided by the
 * base is used as an index into the base_str to get the corresponding digit
 * character, and this character is added to the string.
 * The number is then divided by the base.
 * After the loop, the last digit of the number is added to the string in the
 * same way.
 * Then, the null terminator is added to the string.
 * Finally, the string is reversed to get the correct order of digits, and
 * the reversed string is returned.
 */
char	*ft_itoa_base(unsigned long long int n, int base, int flag_hex_up)
{
	char	*str;
	char	*base_str;
	int		i;

	base_str = HEXALOW;
	if (flag_hex_up)
		base_str = HEXAUP;
	str = malloc(sizeof(char) * ft_get_buffer_size(n, base));
	if (!str)
		return (NULL);
	i = 0;
	while ((n / base) != 0)
	{
		str[i++] = base_str[n % base];
		n = n / base;
	}
	str[i++] = base_str[n % base];
	str[i] = '\0';
	return (ft_strrev(str));
}
