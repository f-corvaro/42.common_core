/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:25:18 by fcorvaro          #+#    #+#             */
/*   Updated: 2023/11/15 17:08:17 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief Calculates the buffer size needed to hold the string representation
 * of a number in a given base.
 *
 * @param n The number to be converted to a string.
 * @param base The base of the number system to be used for the conversion.
 *
 * @note This function checks if the number is 0. If it is, it returns 2 to
 * account for the '0' character and the null terminator.
 * Otherwise, it initializes the size to 1 to account for the null terminator
 * and then enters a loop where it repeatedly divides the number by the base
 * and increments the size.
 * The loop continues until the number becomes 0, at which point the function
 * returns the size.
 *
 * @return The size of the buffer needed to hold the string representation of
 * the number.
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

/**
 * @brief Swaps the values pointed to by two pointers.
 *
 * @param s1 A pointer to the first value.
 * @param s2 A pointer to the second value.
 *
 * @note This function creates a temporary variable and assigns
 * it the value pointed to by the first pointer.
 * It then assigns the value pointed to by the second pointer to
 * the location pointed to by the first pointer.
 * Finally, it assigns the temporary variable to the location pointed
 * to by the second pointer, effectively swapping the values.
 */
void	ft_swap_ptr(char *s1, char *s2)
{
	char	tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

/**
 * @brief Reverses a string in place.
 *
 * @param str A pointer to the string to be reversed.
 *
 * @note This function sets two pointers, start and end, to point
 * to the start and end of the string, respectively.
 * It then enters a loop where it swaps the characters pointed to by
 * start and end and then increments start and decrements end.
 * The loop continues until end is no longer greater than start, at
 * which point the function returns the reversed string.
 *
 * @return The reversed string.
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
		ft_swap_ptr(start++, end--);
	return (str);
}

/**
 * @brief Converts a number to a string representation in a given base.
 *
 * @param n The number to be converted to a string.
 * @param base The base of the number system to be used for the conversion.
 * @param flag_hex_up A flag that indicates whether the hexadecimal number
 * should be printed in uppercase or lowercase.
 *
 * @note This function sets the base string to the lowercase hexadecimal
 * characters. If the flag_hex_up is set, it changes the base string to the
 * uppercase hexadecimal characters.
 * It then allocates a string of size equal to the buffer size needed to
 * hold the string representation of the number.
 * It enters a loop where it repeatedly gets the remainder of the number
 * divided by the base and sets the corresponding character in the string
 * to the character at that index in the base string.
 * The loop continues until the number becomes 0, at which point the function
 * reverses the string and returns it.
 *
 * @return The string representation of the number in the given base.
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
