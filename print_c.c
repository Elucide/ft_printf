#include "ft_printf.c"

int	print_c(char c)
{
	return (write(1, &c, 1));
}
