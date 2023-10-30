#include "./ft_printf/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("real: %d\n", printf(" %p %p ", 0, 0));
	ft_printf("fake: %d\n", ft_printf(" %p %p ", 0, 0));
	return (0);
}