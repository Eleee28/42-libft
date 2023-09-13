#include "libft.h"

int	ft_isascii(int c)
{
	int	ret_value;

	if (((c) & ~0x7f) == 0)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("Original: %d\n", __isascii('"'));	// isascii returns 1 if true, 0 else
	printf("Mine: %d\n", ft_isascii('"'));
	
	return (0);
}
*/