#include "libft.h"

int	ft_isprint(int c)
{
	int	ret_value;

	if (c >= 32 && c <= 126)
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
	printf("Original: %d\n", isprint('~'));	// isprint returns 16384 if true, 0 else
	printf("Mine: %d\n", ft_isprint('~'));

	return (0);
}
*/