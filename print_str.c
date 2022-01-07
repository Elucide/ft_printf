#include "ft_printf.h"

int	printf_str(char *str)
{
	return (write(1, &str, ft_strlen(str)));
}
